; Program to print "Hello, Holberton"
; Written for 64-bit assembly
; No interrupts allowed
; Compiled using nasm and gcc

section .data
str: db 'Hello, Holberton', 0Ah

section .text
global _star
_start:

mov rax, 1
mov rdi, 1
mov rsi, str
mov rdx, 14
syscall

mov rax, 60
mov rdi, 0
syscall
