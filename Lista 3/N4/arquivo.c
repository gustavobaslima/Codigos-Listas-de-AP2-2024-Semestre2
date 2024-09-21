#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int N;

int fibonacci(int n){
    if (n<= 0){
        return 0;
    }else if( n==1){
        return 1;
    }else {
        return fibonacci( n-1) + fibonacci(n-2);
    }
}

int main(){
    printf("Digite o valor N para encontrar o enesimo termo da sequencia de Fibonacci.");
    scanf("%d", &N);

    printf("\nO enesimo termo de fibonacci para N = %d eh: %d.", N, fibonacci(N));
    return 0;
}