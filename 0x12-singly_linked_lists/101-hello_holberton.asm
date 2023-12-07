section .data
    msg db "Hello, Holberton",10,0 ; The message to be printed, with a newline character
    fmt db "%s",0                  ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, fmt     ; arg3: format string
    mov rsi, msg     ; arg2: pointer to string
    mov rax, 0       ; arg1: write to screen
    call printf
    pop rbp

    mov rax, 60      ; syscall: exit
    xor rdi, rdi     ; status: 0
    syscall
