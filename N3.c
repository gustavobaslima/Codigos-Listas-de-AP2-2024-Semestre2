#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    int MenorAB;

    printf("Insira os valores de 'a, b e c': ");
    scanf("%i %i %i", &a, &b, &c);
    MenorAB =( a+ b + abs(a-b))/2;

    if(MenorAB < c){
        printf("MenorAB eh menor.");
    }else{
        printf("c eh menor");
    }

}
