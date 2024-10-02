#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_THREADS 2

// Função que será executada pelas threads
void* contar(void* arg) {
    int id = *(int*)arg; // Acessar o ID da thread diretamente
    for (int i = 0; i < 5; i++) {
        printf("Thread %d: Contando %d\n", id, i);
    }
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    // Criar threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i; // Atribuir um ID à thread
        pthread_create(&threads[i], NULL, contar, &thread_ids[i]);
    }

    // Aguardar a conclusão das threads
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Contagem concluída!\n");
    return 0;
}
