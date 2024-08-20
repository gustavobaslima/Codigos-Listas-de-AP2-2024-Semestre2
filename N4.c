#include <stdio.h>
#include <stdlib.h>

int main(){
    float idade, horasSemana;

    printf("Por favor, informa a idade do aluno e suas horas semanais de estudo para categorizar o aluno: ");
    scanf("%f %f", &idade, &horasSemana);

    if(idade < 18 && horasSemana >=15){
        printf("Aluno Jovem");
    }else if(idade >=18 && idade < 25 && horasSemana >=10){
        printf("Aluno Adulto");
    }else if(idade >=25 && horasSemana >=10){
        printf("Aluno Senior");
    }else if(horasSemana < 5){
        printf("Aluno Desmotivado");
    }else{
            printf("Nao categorizado");
        }
    }