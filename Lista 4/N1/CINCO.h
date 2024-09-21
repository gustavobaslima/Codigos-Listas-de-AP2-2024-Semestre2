#ifndef CINCO_H_INCLUDED
#define CINCO_H_INCLUDED

#include <stdio.h>

void VERIFICACAO_TRIANGULO(){

    int a, b, c;

    printf("\nDigite o valor de um dos lados do triangulo: ");
    scanf("%d", &a);

    printf("Digite o valor do outro lado do triangulo: ");
    scanf("%d", &b);

    printf("Digite o ultimo valor do lado do triangulo: ");
    scanf("%d", &c);

    if((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(a - b) < c && c < a + b)) {

        if(a == b && b == c) {
            printf("\n\nO seu triangulo existe e eh um triangulo equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("\n\nO seu triangulo existe e eh um triangulo isosceles\n");
        } else {
            printf("\n\nO seu triangulo existe e eh um triangulo escaleno\n");
        }
} else{
    printf("\n\nOs valores nao formam um triangulo.");
    return 0;
    }
}

#endif // CINCO_H_INCLUDED