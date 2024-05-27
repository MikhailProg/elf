
__asm__ (
"z_trampo:\n"
		"mov x3, x0\n"
		"mov sp, x1\n"
		"mov x0, x2\n"
		"br x3\n"
		/* Should not reach. */
		"wfi\n"
);
