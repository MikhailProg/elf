
__asm__ (
"z_trampo:\n"
		"mov 4(%esp), %eax\n"
		"mov 8(%esp), %ecx\n"
		"mov 12(%esp), %edx\n"
		"mov %ecx, %esp\n"
		"jmp *%eax\n"
		/* Should not reach. */
		"hlt\n"
);
