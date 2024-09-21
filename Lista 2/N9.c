//Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter
//a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
//a) Permita ao usuário entrar com os dados de 5 alunos.
//b) Encontre o aluno com maior nota da primeira prova.
//c) Encontre o aluno com maior média geral.
//d) Encontre o aluno com menor média geral.
//e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

#include <stdio.h>

struct ALUNO{
    char nome[99];
    int matricula;
    float nota_p1;
    float nota_p2;
    float nota_p3;
};


int main(){
    struct ALUNO info[5];
    int maiornotap1 = 0;
    int maiornotamedia = 0;
    int menormedia = 0;

    for(int i = 0; i<5; i++){
        printf("\nAluno: %d\n", i +1);

        printf("Escreva o nome do aluno: ");
        scanf(" %[^\n]", info[i].nome);
    
        printf("Escreva a matricula do aluno: ");
        scanf("%d", &info[i].matricula);

        printf("Escreva a nota da primeira prova do aluno: ");
        scanf("%f", &info[i].nota_p1);

        printf("Escreva a nota da segunda prova do aluno: ");
        scanf("%f", &info[i].nota_p2);

        printf("Escreva a nota da terceira prova do aluno: ");
        scanf("%f", &info[i].nota_p3);
    }

    printf("\nDados dos alunos: ");
    for(int i = 0; i<5; i++){
        printf("\nAluno %d.", i+1);
        printf("\nNome: %s.", info[i].nome);
        printf("\nMatricula: %d: ", info[i].matricula);
        printf("\nNota da primeira prova: %f", info[i].nota_p1);
        printf("\nNota da segunda prova: %f", info[i].nota_p2);
        printf("\nNota da terceira prova: %f", info[i].nota_p3);
    }

    for (int i = 1; i<5; i++){
        if(info[i].nota_p1 > info[maiornotap1].nota_p1){
            maiornotap1 = i;
        }
    }
    
    for(int i = 0; i < 5; i++){
        float media = (info[i].nota_p1 + info[i].nota_p2 + info[i].nota_p3) / 3.0;
        
        if(media > maiornotamedia){
            maiornotamedia = media;
            maiornotamedia = i;
        }
    
    if (media < menormedia){
        menormedia = media;
        menormedia = i;
    }
}

    printf("Aluno com a maior nota da primeira prova: %s (Matricula: %d)\n", info[maiornotap1].nome, info[maiornotap1].matricula);
    printf("Aluno com a maior media: %s (Matricula: %d)\n", info[maiornotamedia].nome, info[maiornotamedia].matricula);
    printf("Aluno com a menor media: %s (Matricula: %d)\n", info[menormedia].nome, info[menormedia].matricula);

    for(int i = 0; i<5; i++){
        float media = (info[i].nota_p1 + info[i].nota_p2 + info[i].nota_p3) / 3.0;
        printf("\nAluno: %s (Matricula: %d) - Media: %.2f - ", info[i].nome, info[i].matricula, media);
        if (media >= 6){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
        
    }
}
