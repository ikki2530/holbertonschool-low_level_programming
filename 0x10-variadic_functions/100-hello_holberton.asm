section .data
	txt db "Hello, Holberton", 10

	section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, txt
	mov rdx, 17
	syscall
