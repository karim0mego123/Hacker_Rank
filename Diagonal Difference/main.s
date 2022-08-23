	.file	"main.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x70,0x6
	.cfi_escape 0x10,0x7,0x2,0x75,0x7c
	.cfi_escape 0x10,0x6,0x2,0x75,0x78
	.cfi_escape 0x10,0x3,0x2,0x75,0x74
	subl	$72, %esp
	call	___main
	movl	%esp, %eax
	movl	%eax, -72(%ebp)
	movl	$0, -40(%ebp)
	movl	$0, -36(%ebp)
	leal	-56(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	-56(%ebp), %ebx
	movl	-56(%ebp), %edi
	leal	-1(%ebx), %eax
	movl	%eax, -44(%ebp)
	movl	%ebx, %eax
	sall	$2, %eax
	movl	%eax, -60(%ebp)
	leal	-1(%edi), %eax
	movl	%eax, -48(%ebp)
	movl	%ebx, -64(%ebp)
	movl	%ebx, %eax
	movl	%eax, %ecx
	movl	$0, %ebx
	movl	%edi, -68(%ebp)
	movl	%edi, %eax
	movl	$0, %edx
	movl	%ebx, %esi
	imull	%eax, %esi
	movl	%esi, %edi
	movl	%edx, %esi
	imull	%ecx, %esi
	addl	%edi, %esi
	mull	%ecx
	leal	(%esi,%edx), %ecx
	movl	%ecx, %edx
	movl	-64(%ebp), %eax
	movl	%eax, %ecx
	movl	$0, %ebx
	movl	-68(%ebp), %eax
	movl	$0, %edx
	movl	%ebx, %esi
	imull	%eax, %esi
	movl	%esi, %edi
	movl	%edx, %esi
	imull	%ecx, %esi
	addl	%edi, %esi
	mull	%ecx
	leal	(%esi,%edx), %ecx
	movl	%ecx, %edx
	movl	-64(%ebp), %edx
	movl	-68(%ebp), %eax
	imull	%edx, %eax
	sall	$2, %eax
	leal	3(%eax), %edx
	movl	$16, %eax
	subl	$1, %eax
	addl	%edx, %eax
	movl	$16, %ebx
	movl	$0, %edx
	divl	%ebx
	imull	$16, %eax, %eax
	call	___chkstk_ms
	subl	%eax, %esp
	leal	8(%esp), %eax
	addl	$3, %eax
	shrl	$2, %eax
	sall	$2, %eax
	movl	%eax, -52(%ebp)
	movl	$0, -32(%ebp)
	jmp	L2
L7:
	movl	$0, -28(%ebp)
	jmp	L3
L6:
	movl	-60(%ebp), %eax
	shrl	$2, %eax
	imull	-32(%ebp), %eax
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %edx
	movl	-52(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	-32(%ebp), %eax
	cmpl	-28(%ebp), %eax
	jne	L4
	movl	-60(%ebp), %edx
	shrl	$2, %edx
	movl	-52(%ebp), %eax
	movl	%edx, %ecx
	imull	-32(%ebp), %ecx
	movl	-28(%ebp), %edx
	addl	%ecx, %edx
	movl	(%eax,%edx,4), %eax
	addl	%eax, -40(%ebp)
L4:
	movl	-32(%ebp), %edx
	movl	-28(%ebp), %eax
	addl	%eax, %edx
	movl	-56(%ebp), %eax
	subl	$1, %eax
	cmpl	%eax, %edx
	jne	L5
	movl	-60(%ebp), %edx
	shrl	$2, %edx
	movl	-52(%ebp), %eax
	movl	%edx, %ecx
	imull	-32(%ebp), %ecx
	movl	-28(%ebp), %edx
	addl	%ecx, %edx
	movl	(%eax,%edx,4), %eax
	addl	%eax, -36(%ebp)
L5:
	addl	$1, -28(%ebp)
L3:
	movl	-56(%ebp), %eax
	cmpl	%eax, -28(%ebp)
	jl	L6
	addl	$1, -32(%ebp)
L2:
	movl	-56(%ebp), %eax
	cmpl	%eax, -32(%ebp)
	jl	L7
	movl	-40(%ebp), %eax
	cmpl	-36(%ebp), %eax
	jle	L8
	movl	-40(%ebp), %eax
	subl	-36(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	jmp	L9
L8:
	movl	-36(%ebp), %eax
	subl	-40(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
L9:
	movl	$0, %eax
	movl	-72(%ebp), %esp
	leal	-16(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (i686-win32-dwarf-rev0, Built by MinGW-W64 project) 7.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
