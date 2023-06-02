section .data
message db "Hello, Holberton", 0
section .text
extern printf
global main
main:
; Save callee-saved registers
push rbx
push rbp
push r12
push r13
push r14
push r15
; Prepare arguments for printf function call
mov rdi, message
xor rax, rax
; Call printf
call printf
; Clean up stack
add rsp, 8
; Restore callee-saved registers
pop r15
pop r14
pop r13
pop r12
pop rbp
pop rbx
; Exit program
mov eax, 0x60
xor edi, edi
syscall
