#include <stdio.h>

struct DMA 
{
    int dia;
    int mes;
    int ano;

};

int Bissexto(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || (ano %400 == 0 )){
        return 1;
    }else{
        return 0;
    }
}

int dias_do_mes(int mes,int ano){
    switch(mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 11:
            return 30;
        
        case 2: 
            return Bissexto(ano)? 29: 28;
        default:
        return 0;
    }
}

int converter_para_dias(struct DMA data){
    int dia = data.dia;


    for (int i = 1; i < data.mes; i++){
        dia += dias_do_mes(i, data.ano);
    }

    for (int i = 0; i < data.ano; i++){
        dia += Bissexto(i) ? 366: 365;
    }

    return dia;
}

int main(){
    struct DMA data1, data2;
    printf("Escreva os dias, meses e anos da primeira data.");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Escreva os dias, meses e anos da segunda data.");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int dia1 = converter_para_dias(data1);
    int dia2 = converter_para_dias(data2);

    int diferenca_dias = dia2 - dia1; 
    if( diferenca_dias <0){
        diferenca_dias = -diferenca_dias;
    }

    printf("\nA diferenca entre as duas datas foi de: %d dia(s).", diferenca_dias);

    return 0;
}

