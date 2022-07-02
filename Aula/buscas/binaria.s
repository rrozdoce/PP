	.file	"binaria.c"
	.intel_syntax noprefix
	.text
	.globl	_pertence
	.def	_pertence;	.scl	2;	.type	32;	.endef
_pertence:
	push	ebp
	mov	ebp, esp
	sub	esp, 16
	mov	DWORD PTR [ebp-8], 0
	mov	eax, DWORD PTR [ebp+16]
	sub	eax, 1
	mov	DWORD PTR [ebp-8], eax
	jmp	L2
L6:
	mov	edx, DWORD PTR [ebp-4]
	mov	eax, DWORD PTR [ebp-8]
	add	eax, edx
	mov	edx, eax
	shr	edx, 31
	add	eax, edx
	sar	eax
	mov	DWORD PTR [ebp-12], eax
	mov	eax, DWORD PTR [ebp-12]
	lea	edx, [0+eax*4]
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	mov	eax, DWORD PTR [eax]
	cmp	DWORD PTR [ebp+8], eax
	jne	L3
	mov	eax, 1
	jmp	L4
L3:
	mov	eax, DWORD PTR [ebp-12]
	lea	edx, [0+eax*4]
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	mov	eax, DWORD PTR [eax]
	cmp	DWORD PTR [ebp+8], eax
	jge	L5
	mov	eax, DWORD PTR [ebp-12]
	sub	eax, 1
	mov	DWORD PTR [ebp-8], eax
	jmp	L2
L5:
	mov	eax, DWORD PTR [ebp-12]
	add	eax, 1
	mov	DWORD PTR [ebp-4], eax
L2:
	mov	eax, DWORD PTR [ebp-4]
	cmp	eax, DWORD PTR [ebp-8]
	jle	L6
	mov	eax, 0
L4:
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	push	ebp
	mov	ebp, esp
	and	esp, -16
	sub	esp, 112
	call	___main
	mov	DWORD PTR [esp+108], 10
	mov	DWORD PTR [esp+68], 9
	mov	DWORD PTR [esp+72], 8
	mov	DWORD PTR [esp+76], 7
	mov	DWORD PTR [esp+80], 6
	mov	DWORD PTR [esp+84], 5
	mov	DWORD PTR [esp+88], 4
	mov	DWORD PTR [esp+92], 3
	mov	DWORD PTR [esp+96], 2
	mov	DWORD PTR [esp+100], 1
	mov	DWORD PTR [esp+104], 0
	mov	DWORD PTR [esp+28], 0
	mov	DWORD PTR [esp+32], 1
	mov	DWORD PTR [esp+36], 2
	mov	DWORD PTR [esp+40], 3
	mov	DWORD PTR [esp+44], 4
	mov	DWORD PTR [esp+48], 5
	mov	DWORD PTR [esp+52], 6
	mov	DWORD PTR [esp+56], 7
	mov	DWORD PTR [esp+60], 8
	mov	DWORD PTR [esp+64], 9
	mov	eax, DWORD PTR [esp+108]
	mov	DWORD PTR [esp+8], eax
	lea	eax, [esp+28]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], 10
	call	_pertence
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_printf
	mov	eax, DWORD PTR [esp+108]
	mov	DWORD PTR [esp+8], eax
	lea	eax, [esp+28]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], 9
	call	_pertence
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_printf
	mov	eax, DWORD PTR [esp+108]
	mov	DWORD PTR [esp+8], eax
	lea	eax, [esp+28]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], 5
	call	_pertence
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_printf
	mov	eax, 0
	leave
	ret
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
