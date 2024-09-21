#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int hora;

int saudacao(){
    if( hora >= 601 && hora <= 1200){
        printf("Bom dia!");
    }else if(hora >= 1201 && hora <= 1800){
        printf("Boa Tarde!");
    }else if((hora >= 1801 && hora <= 2359) || (hora >= 0 && hora <= 559)){
        printf("Boa Noite!");
    }else{
        printf("\nValor invalido!");
        return 0;
    }
    return 1;
}

int main(){
    printf("Digite a hora no formado HHMM (ex: 1930 para 19:30): ");
    scanf("%d", &hora);

    saudacao();

    return 0;
}


