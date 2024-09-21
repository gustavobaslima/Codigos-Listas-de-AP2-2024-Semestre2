#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int x;
int y;

int somar(){
    return x + y;
}

int subtrair(){
    return x - y;
}

int multiplicar(){
    return x * y;
}

float dividir(){
    if (y != 0){
        return (float)x/y;
    }else{
        printf("Erro: divisao por zero.");
        return 0.0;
    }
}

int main(){
    printf("Digite o x: ");
    scanf("%i", &x);

    printf("Digite o y: ");
    scanf("%i", &y);

    printf("\nSoma: %d", somar());
    printf("\nSubtracao: %d", subtrair());
    printf("\nMultiplicacao: %d", multiplicar());
    printf("\nDivisao: %.2f", dividir());
}
