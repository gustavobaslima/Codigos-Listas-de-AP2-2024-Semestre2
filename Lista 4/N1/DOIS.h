#ifndef DOIS_H_INCLUDED
#define DOIS_H_INCLUDED

#include <stdio.h>

int POSITIVO_NEGATIVO(){

    int n;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    if(n > 0){
        return 1;
    }else{
        return 0;
    }
}

#endif // DOIS_H_INCLUDED