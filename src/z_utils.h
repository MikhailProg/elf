#ifndef Z_UTILS_H
#define Z_UTILS_H

#include "nolibc.h"

#define alloca	__builtin_alloca

__attribute__ ((format (printf, 2, 3)))
static void z_errx(int eval, const char *fmt, ...)
{
		va_list ap;
		fprintf(stderr, "error: ");
		va_start(ap, fmt);
		vfprintf(stderr, fmt, ap);
		va_end(ap);
		fprintf(stderr, "\n");
		exit(eval);
}

#endif /* Z_UTILS_H */

