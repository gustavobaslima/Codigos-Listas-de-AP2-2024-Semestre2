#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, fat = 1;
    
    printf("Por favor, insira um valor inteiro e positivo para imprimir o fatorial do mesmo: ");
    scanf("%i", &n);

    if(n < 0){
        printf("Numero invalido por ser negativo.");

    }else{
            for(int i = 1; i<=n; i++){
            fat *=i;
        }
    printf("O fatorial deste numero eh: %i", fat);

}
}