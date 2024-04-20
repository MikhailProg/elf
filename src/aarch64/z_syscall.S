	.text
	.align	4
	.globl	z_syscall
	.type	z_syscall,@function
z_syscall:
	uxtw	x8,	w0
	mov	x0,	x1
	mov	x1,	x2
	mov	x2,	x3
	mov	x3,	x4
	mov	x4,	x5
	mov	x5,	x6
	mov	x6,	x7
	svc	0x0
	ret

