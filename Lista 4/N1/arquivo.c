#include <stdio.h>
#include "DOIS.h"
#include "TRES.h"
#include "QUATRO.h"
#include "CINCO.h"
#include "SEIS.h"
#include "SETE.h"

int main(){
    int op, n, num1, num2;

    do{
      printf("\n\n==========MENU==========\n");
      printf("1- Identificador de sinal de um numero;\n");
      printf("2- Conversor de segundos para horas, minutos e segundos;\n");
      printf("3- Soma de numeros dentro de um intervalo;\n");
      printf("4- Verificacao de valores de um triangulo;\n");
      printf("5- Analise combinatoria;\n");
      printf("6- Valores de taxa de estacionamento;\n");
      printf("0- Sair.\n\n");

      printf("Digite uma das opcoes acima: ");
      scanf("%d", &op);

      switch(op){
        case 1:
            printf("%d", POSITIVO_NEGATIVO(n));
            break;
        case 2:
            CONVERSOR_SEGUNDOS();
            break;
        case 3:
            printf("%d", SOMA_INTERVALO(num1, num2));
            break;
        case 4:
            VERIFICACAO_TRIANGULO();
            break;
        case 5:
            COMBINACAONP();
            break;
        case 6:
            CALCULO_ESTACIONAMENTO();
            break;
        case 0:
            printf("Saindo...");
            break;
        default:
            printf("Opcao invalida, digite novamente.");
            break;
      }
    } while(op != 0);

    return 0;
}