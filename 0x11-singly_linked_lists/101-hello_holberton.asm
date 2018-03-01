section functions
	extern printf
	section .to_print
to_print: db "Hello, Holberton", 10, 0

	section .text
	global main
main:
	push rbp
	mov rdi, to_print
	call printf
	pop rbp
	ret