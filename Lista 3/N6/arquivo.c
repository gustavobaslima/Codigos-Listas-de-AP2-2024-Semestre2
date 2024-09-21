#include <stdio.h>

typedef struct {
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

// Função para ler os dados do aluno
void LeAluno(int i) {
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &Turma[i].matricula);
    for (int j = 0; j < 3; j++) {
        printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
        scanf("%f", &Turma[i].notas[j]);
    }
}

// Função para imprimir os dados de todos os alunos
void ImprimeTurma() {
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d - Matrícula: %d\n", i + 1, Turma[i].matricula);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, Turma[i].notas[j]);
        }
        printf("\n");
    }
}

// Função para calcular a média das notas de um aluno
float CalculaMediaAluno(int i) {
    float soma = 0;
    for (int j = 0; j < 3; j++) {
        soma += Turma[i].notas[j];
    }
    return soma / 3;
}

int main() {
    int i;
    float media;

    for (i = 0; i < 5; i++) {
        LeAluno(i); // Lê os dados do aluno
    }

    ImprimeTurma(); // Imprime os dados de todos os alunos

    for (i = 0; i < 5; i++) {
        media = CalculaMediaAluno(i); // Calcula a média das notas do aluno
        printf("Aluno %d - Média = %.2f\n", i + 1, media); // Imprime a média do aluno
    }

    return 0;
}