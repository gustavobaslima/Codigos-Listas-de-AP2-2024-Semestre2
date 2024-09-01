#include <stdlib.h>
#include <stdio.h>

int main(){
    float hrs, hrsInsec;
        printf("Por favor insira a quantidade que horas que deseja transformar em segundos: ");
        scanf("%f", &hrs);

    hrsInsec = hrs * 3600;

    printf("Esse foi o tempo em segundos apos converter: %.f segundos ", hrsInsec);
    return 0;        
}