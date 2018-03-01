section .text
	global main
main:
	mov ebx, 1
	mov ecx, message
	mov edx, length
	mov eax, 4
	int 0x80

	mov eax, 0
	int 0x80

section .data
	message db "Hello, Holberton", 0xa
	length equ $ - message

