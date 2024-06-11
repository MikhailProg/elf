void z_entry(unsigned long *sp, void (*fini)(void));

int main(int argc, char **argv) {
	(void) argc;
	(void) argv;
	return 0;
}

void _start_c(unsigned long *sp) {
	z_entry(sp, (void *) 0);
}
