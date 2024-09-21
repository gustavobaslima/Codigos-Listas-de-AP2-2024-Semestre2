#include <stdio.h>
#include <stdlib.h>
#include "ex.1.h"

int numero;

int verifica_ex1(){
    return numero % 2;
    };

int main(){
    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(verifica_ex1()){
        printf("\nO numero %d eh impar.", numero);
    }else{
        printf("\nO numero %d eh par.", numero);

    }

    return 0;
}
