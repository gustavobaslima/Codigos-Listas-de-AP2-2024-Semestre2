#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

float nota1;
float nota2;
float nota3;
char tipo_media;

float media_arit(){
    return (nota1 + nota2 + nota3)/3 ;
}

float media_pond(){
    return ( nota1 * 5 + nota2 * 3 + nota3 *2) / (5+3+2);
}

int main(){
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite o tipo de media. ");
    scanf(" %c", &tipo_media);

    float result;

    if (tipo_media == 'A'){
        result = media_arit();
        printf("\nA media aritmetica eh: %.2f ", result);
    }else if( tipo_media == 'P'){
        result = media_pond();
        printf("\n A media ponderada eh: %.2f", result);
    }else{
        printf("\nTipo de media invalido!");
    }
}