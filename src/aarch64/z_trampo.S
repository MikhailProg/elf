	.text
	.align	4
	.globl	z_trampo
	.type	z_trampo,@function
z_trampo:
	mov	x3,	x0
	mov	sp,	x1
	mov	x0,	x2
	br	x3
	/* Should not reach. */
	wfi

