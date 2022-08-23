	.file	"main.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "%lld\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$832, %esp
	call	___main
	movl	$0, 824(%esp)
	movl	$0, 828(%esp)
	leal	819(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	$0, 820(%esp)
	jmp	L2
L3:
	leal	16(%esp), %eax
	movl	820(%esp), %edx
	sall	$3, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	820(%esp), %eax
	movl	20(%esp,%eax,8), %edx
	movl	16(%esp,%eax,8), %eax
	addl	%eax, 824(%esp)
	adcl	%edx, 828(%esp)
	addl	$1, 820(%esp)
L2:
	movzbl	819(%esp), %eax
	movsbl	%al, %eax
	cmpl	%eax, 820(%esp)
	jl	L3
	movl	824(%esp), %eax
	movl	828(%esp), %edx
	movl	%eax, 4(%esp)
	movl	%edx, 8(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (i686-win32-dwarf-rev0, Built by MinGW-W64 project) 7.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
