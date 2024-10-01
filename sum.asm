section .note.GNU-stack
section .text
global soma   

soma:
    mov rax, rdi    ; Primeiro parâmetro (a) em rdi
    add rax, rsi    ; Soma a (em rax) com b (em rsi)
    ret             ; Retorna o resultado em rax
