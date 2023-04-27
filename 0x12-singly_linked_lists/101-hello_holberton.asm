section .data
    message db "Hello, Holberton", 10, 0

section .text
    global main

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Call printf to print message
    mov rdi, message
    mov rax, 0
    call printf

    ; Clean up and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
