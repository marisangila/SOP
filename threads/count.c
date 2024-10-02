#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* contar_ascendente(void* arg) {
    int n = *(int*)arg; // Recebe o número passado como argumento
    for (int i = 1; i <= n; i++) {
        printf("Contagem Ascendente: %d\n", i);
        sleep(1); 
    }
    return NULL;
}

void* contar_descendente(void* arg) {
    int n = *(int*)arg; // Recebe o número passado como argumento
    for (int i = n; i >= 1; i--) {
        printf("Contagem Descendente: %d\n", i);
        sleep(1);
    }
    return NULL;
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    pthread_t threads[2];

    // Criar threads
    pthread_create(&threads[0], NULL, contar_ascendente, &n);
    pthread_create(&threads[1], NULL, contar_descendente, &n);

    // Aguardar a conclusão das threads
    for (int i = 0; i < 2; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Contagem concluída!\n");
    return 0;
}
