	.file	"floatcnv.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%u, %u, %u, %u\12\0"
.LC2:
	.ascii "%.1e %.1e %.1e %.1e\12\0"
.LC3:
	.ascii "%ld %ld\12\0"
.LC4:
	.ascii "%ld %ld %ld %ld\12\0"
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$72, %rsp
	.seh_stackalloc	72
	movaps	%xmm6, 48(%rsp)
	.seh_savexmm	%xmm6, 48
	.seh_endprologue
	call	__main
	movl	$4, %r9d
	movq	$4, 32(%rsp)
	movl	$8, %r8d
	movl	$4, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movsd	.LC1(%rip), %xmm6
	movl	$1234567890, 32(%rsp)
	movl	$2000000000, %r9d
	leaq	.LC2(%rip), %rcx
	movapd	%xmm6, %xmm2
	movapd	%xmm6, %xmm1
	movq	%xmm6, %r8
	movq	%xmm6, %rdx
	call	printf
	movl	$1234567890, %r8d
	movl	$2000000000, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	movsd	%xmm6, 32(%rsp)
	movapd	%xmm6, %xmm3
	movq	%xmm6, %r9
	movl	$2000000000, %r8d
	movl	$1234567890, %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	nop
	movaps	48(%rsp), %xmm6
	xorl	%eax, %eax
	addq	$72, %rsp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC1:
	.long	0
	.long	1074266112
	.ident	"GCC: (tdm64-1) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
