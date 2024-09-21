#include <stdio.h>

struct ALUNO{
    char nome[99];
    char curso[99];
    int matricula;
};

int main(){
    struct ALUNO info[5];

    for(int i = 0; i<5; i++){
        printf("\nAluno: %d\n", i +1);

        printf("Escreva o nome do aluno: ");
        scanf(" %[^\n]", info[i].nome);
    
        printf("Escreva a matricula do aluno: ");
        scanf("%d", &info[i].matricula);

        printf("Escreva o curso do aluno: ");
        scanf(" %[^\n]", info[i].curso);

    }

    printf("\nDados dos alunos: ");
    for(int i = 0; i<5; i++){
        printf("\nAluno %d.", i+1);
        printf("\nNome: %s: ", info[i].nome);
        printf("\nMatricula: %d", info[i].matricula);
        printf("\nCurso: %s", info[i].curso);
    }
}
