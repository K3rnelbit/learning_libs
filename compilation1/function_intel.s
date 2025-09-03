	.file	"function.c"
	.intel_syntax noprefix
	.text
	.globl	nComplitionStatus
	.bss
	.align 4
	.type	nComplitionStatus, @object
	.size	nComplitionStatus, 4
nComplitionStatus:
	.zero	4
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	movss	DWORD PTR -4[rbp], xmm0
	movss	DWORD PTR -8[rbp], xmm1
	movss	xmm0, DWORD PTR -4[rbp]
	addss	xmm0, DWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.globl	add_and_multiply
	.type	add_and_multiply, @function
add_and_multiply:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 24
	movss	DWORD PTR -20[rbp], xmm0
	movss	DWORD PTR -24[rbp], xmm1
	movss	xmm0, DWORD PTR -24[rbp]
	mov	eax, DWORD PTR -20[rbp]
	movaps	xmm1, xmm0
	movd	xmm0, eax
	call	add
	movd	eax, xmm0
	mov	DWORD PTR -4[rbp], eax
	movss	xmm1, DWORD PTR -4[rbp]
	movss	xmm0, DWORD PTR .LC0[rip]
	mulss	xmm0, xmm1
	movss	DWORD PTR -4[rbp], xmm0
	movss	xmm0, DWORD PTR -4[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	add_and_multiply, .-add_and_multiply
	.section	.rodata
	.align 4
.LC0:
	.long	1077936128
	.ident	"GCC: (GNU) 15.2.1 20250813"
	.section	.note.GNU-stack,"",@progbits
