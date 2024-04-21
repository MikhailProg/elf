	.text
	.align	4
	.globl	z_start
	.hidden	z_start
	.type	z_start,@function
z_start:
	mov	x29,	#0
	mov	x30,	#0
	mov	x1,	x0
	mov	x0,	sp
	bl	z_entry
	wfi

