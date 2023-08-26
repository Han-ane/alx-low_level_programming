section .data
    format db `Hello, OpenAI\n`, 0
section .text
    global main
    extern printf
main:
    ; Prepare the arguments for printf
    mov   edi, format
    xor   eax, eax
    ; Call printf
    call  printf
    ; Return 0 to indicate successful execution
    mov   eax, 0
    ret
