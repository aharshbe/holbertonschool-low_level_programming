section function_printf
	extern printf
	section .to_print
to_print: db "Hello, Holberton", 10

	section .text
	global main
main:
	push rbp
	mov rdi, to_print
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret