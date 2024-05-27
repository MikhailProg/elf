#ifndef _TRAMPO_H
#define _TRAMPO_H

#if defined(__x86_64__)
#include "trampo-x86_64.h"
#elif defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__)
#include "trampo-i386.h"
#elif defined(__aarch64__)
#include "trampo-aarch64.h"
#else
#error Unsupported Architecture
#endif

void z_trampo(void (*entry)(void), unsigned long *sp, void (*fini)(void));

#endif /* _TRAMPO_H */
