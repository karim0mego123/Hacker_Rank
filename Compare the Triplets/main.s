	.file	"main.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "%d %d\0"
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
	subl	$64, %esp
	call	___main
	movl	$1, (%esp)
	movl	__imp____acrt_iob_func, %eax
	call	*%eax
	movl	$0, 12(%esp)
	movl	$4, 8(%esp)
	movl	$0, 4(%esp)
	movl	%eax, (%esp)
	call	_setvbuf
	movl	$2, (%esp)
	movl	__imp____acrt_iob_func, %eax
	call	*%eax
	movl	$0, 12(%esp)
	movl	$4, 8(%esp)
	movl	$0, 4(%esp)
	movl	%eax, (%esp)
	call	_setvbuf
	movl	$0, 60(%esp)
	movl	$0, 56(%esp)
	movl	$0, 52(%esp)
	jmp	L2
L3:
	leal	32(%esp), %eax
	movl	52(%esp), %edx
	sall	$2, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	addl	$1, 52(%esp)
L2:
	cmpl	$2, 52(%esp)
	jle	L3
	movl	$0, 48(%esp)
	jmp	L4
L5:
	leal	20(%esp), %eax
	movl	48(%esp), %edx
	sall	$2, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	addl	$1, 48(%esp)
L4:
	cmpl	$2, 48(%esp)
	jle	L5
	movl	$0, 44(%esp)
	jmp	L6
L10:
	movl	44(%esp), %eax
	movl	32(%esp,%eax,4), %edx
	movl	44(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	cmpl	%eax, %edx
	jle	L7
	addl	$1, 60(%esp)
	jmp	L8
L7:
	movl	44(%esp), %eax
	movl	32(%esp,%eax,4), %edx
	movl	44(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	cmpl	%eax, %edx
	jge	L12
	addl	$1, 56(%esp)
	jmp	L8
L12:
	nop
L8:
	addl	$1, 44(%esp)
L6:
	cmpl	$2, 44(%esp)
	jle	L10
	movl	56(%esp), %eax
	movl	%eax, 8(%esp)
	movl	60(%esp), %eax
	movl	%eax, 4(%esp)
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
	.def	_setvbuf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
