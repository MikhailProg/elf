
__asm__ (
"z_trampo:\n"
		"mov %rsi, %rsp\n"
		"jmp *%rdi\n"
		/* Should not reach. */
		"hlt\n"
);
