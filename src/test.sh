#!/bin/sh

TEST_DIR=/tmp/loadertests
TEST_SRC=${TEST_DIR}/test.c
CFLAGS="-Wall -Wextra -s ${M32+-m32}"

set -eu

trap 'rm -rf $TEST_DIR' EXIT

PATH=.:$PATH

command -v loader > /dev/null || { echo >&2 "error: build the project"; exit 1; }

mkdir -p $TEST_DIR

cat > $TEST_SRC << EOF
#include <stdio.h>

int main()
{
    printf("Hello %s!\n", "world");
    return 0;
}
EOF

for opt in "default@" "static@ -static" "pie@ -fPIE" "static pie@ -static-pie -fPIE"; do
    label=${opt%@*}
    flags=${opt#*@}
    out=$TEST_DIR/$label

    printf "%-15s: " "$label" 
    cc $CFLAGS $flags "$TEST_SRC" -o "$out"
    loader "$out" >/dev/null 2>&1 && echo PASS || echo FAIL
done

