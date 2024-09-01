#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i = 0;
    unsigned long long int primeiro = 0, segundo = 1, proximo;

printf("Digite o número de termos da sequência de Fibonacci: ");
            scanf("%d", &n);

            printf("Sequência de Fibonacci até o %dº termo:\n", n);

            while (i < n){
                printf("%llu ", primeiro);
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
                i++;
            }
}