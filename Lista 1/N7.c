#include <stdio.h>

#define TAMANHO_VETOR 10

// Função para verificar se um número é primo
int eh_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int vetor[TAMANHO_VETOR];

    // Preencher o vetor com 1 se o índice for primo, caso contrário 0
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = eh_primo(i);
    }

    // Imprimir o vetor
    printf("Vetor preenchido:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}