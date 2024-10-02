#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();  // Cria um novo processo

    if (pid < 0) {
        // Erro ao criar o processo
        perror("fork falhou");
        return 1;
    } else if (pid == 0) {
        // Este bloco é executado pelo processo filho
        printf("Processo filho (PID: %d) está dormindo por 5 segundos...\n", getpid());
        sleep(5);  // O filho "dorme" por 5 segundos
        printf("Processo filho acordou!\n");
        exit(0);  // O filho termina sua execução
    } else {
        // Este bloco é executado pelo processo pai
        printf("Processo pai (PID: %d) criou um filho (PID: %d)\n", getpid(), pid);
        wait(NULL);  // O pai espera o filho terminar
        printf("Processo pai: O filho terminou sua execução.\n");
    }

    return 0;
}
