#ifndef SEIS_H_INCLUDED
#define SEIS_H_INCLUDED

#include <stdio.h>

static inline unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

static inline unsigned long long combinacao(int n, int p) {
    if (p > n || p < 0) {
        return 0;
    }
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

static inline void COMBINACAONP() {
    int n, p;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    printf("\nDigite o valor de p: ");
    scanf("%d", &p);

    unsigned long long resultado = combinacao(n, p);
    printf("C(%d, %d) = %llu\n", n, p, resultado);
}

#endif // SEIS_H_INCLUDED