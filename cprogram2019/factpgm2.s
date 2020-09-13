	.file	"factpgm2.c"
	.text
	.globl	_factorial
	.def	_factorial;	.scl	2;	.type	32;	.endef
_factorial:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$1, -8(%ebp)
	movl	$0, -4(%ebp)
	jmp	L2
L3:
	movl	-8(%ebp), %eax
	imull	8(%ebp), %eax
	movl	%eax, -8(%ebp)
	subl	$1, 8(%ebp)
	addl	$1, -4(%ebp)
L2:
	movl	-4(%ebp), %eax
	cmpl	8(%ebp), %eax
	jle	L3
	movl	-8(%ebp), %eax
	leave
	ret
	.ident	"GCC: (GNU) 8.2.0"
