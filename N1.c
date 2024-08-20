#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int esc;

    do{
        printf("\nLista de AP2");
        printf("\nEscolha de um exercicio de 1 a 8, para isso digite o numero do exercicio que desejar.");
        printf("\nCaso queira sair digite '0'.");
        printf("\nPor favor digite sua opcao: ");
        scanf("%i", &esc);
        
        switch(esc){
            case 1:
                printf("\nVoce escolheu o exercicio 1!");
                printf("\nEnunciado deste exercicio:");
                printf("\n1 - Faca um menu interativo para selecionar um dos exercicios desta lista de exercicios. Use o laco do while e switch case.");
                printf("\n");
                break;
            case 2:
                printf("\nVoce escolheu o exercicio 2!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n2 - Faca um programa que receba o tempo em horas e converta e imprima na tela, o tempo em segundos. ");
                printf("\n");
                break;
            case 3:
                printf("\nVoce escolheu o exercicio 3!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n3 - Transcreva o seguinte fluxograma para a linguagem C:");
                printf("\n(Nao da pra colocar o fluxograma aqui :<)");
                printf("\n");
                break;
            case 4:
                printf("\nVoce escolheu o exercicio 4!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n4 - Escreva um programa em C, que leia a idade e o número de horas de estudo por semana de um aluno. ");
                printf("\nUsando estrutura condicional composta (aninhada e/ou com operadores lógicos && e ||), o codigo deve categorizar o aluno em uma das seguintes categorias:");
                printf("Estudante Jovem: Se a idade do aluno for menor que 18 anos e ele estudar pelo menos 15 horas por semana.");
                printf("Estudante Adulto: Se a idade do aluno for maior ou igual a 18 anos e menor que 25 anos e ele estudar pelo menos 10 horas por semana");
                printf("Estudante Sênior: Se a idade do aluno for maior ou igual a 25 anos e ele estudar menos de 10 horas por semana.");
                printf("Estudante Desmotivado: Se o aluno estudar menos de 5 horas por semana, independentemente da idade.");
                printf("Não Categorizado: Se o aluno não se encaixar em nenhuma das categorias acima.");
                printf("Ao final, o programa deve imprimir qual categoria o aluno pertence com base na idade e no numero de horas de estudo por semana.");
                printf("\n");
                break;
            case 5:
                printf("\nVoce escolheu o exercicio 5!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n5 - Faca um programa que usando o laco do tipo for receba um valor N do tipo inteiro e positivo (fazer tratamento de erro), calcule e mostre o Fatorial de N.");
                printf("\n");
                break;
            case 6:
                printf("\nVoce escolheu o exercicio 6!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n6 - Faça um programa que usando o laço do tipo while receba um valor N do tipo inteiro e positivo (fazer tratamento de erro), calcule e mostre o Fibonacci de N");
                printf("\n");
                break;
            case 7:
                printf("\nVoce escolheu o exercicio 7!");
                printf("\nEnunciado deste exericicio: ");
                printf("\n7 - Faça um programa que preencha um vetor com 10 posições, sendo que se o índice for um número primo, deverá preencher com o valor 1. ");
                printf("\nNos demais elementos do vetor, preencher com o valor 0. Dica, primeiro, verifique se o i-esimo elemento do vetor e um numero primo.");
                printf("\n");
                break;
            case 8:
                printf("\nVoce escolheu o exercicio 8!");
                printf("\nEnunciado deste exercicio: ");
                printf("\n8 - Faça um programa que leia uma string (considere que os espaços em branco já foram descartados) e verifique se ela e palíndromo."); 
                printf("\nUm palindromo acontece quando uma palavra lida de frente para trás é igual a palavra lida de trás para frente. Exemplo: arara, subi no ônibus.");
                printf("\n");
                break;
                default:
                    if(esc ==0){
                        printf("\nFim da Lista");
                        }else{
                            printf("Opcao errada! Por favor, digite uma opcao valida.");
                        }
                    }
            }while(esc!=0);
        }