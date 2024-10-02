#include <stdio.h>

extern long soma(long a, long b); // Declaração da função em assembly

int main() {
    long resultado = soma(5, 10);
    printf("Resultado: %ld\n", resultado);
    return 0;
}

