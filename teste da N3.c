#include <stdio.h>

struct HORARIOS{
    
        int horas, minutos, segundos;
}

struct DATA{
    
        int dias,mes,anos;
};

struct AGENDA{
        struct HORARIOS, DATA;
        char texto[99];
        
}
    
int main(){
    
    struct HORARIOS,DATA,AGENDA menu;
    int op;
    
    do{
        printf("Escolha uma das alternativas do menu interativo.");
        printf("\n1 - Preencher os campos da struct.");
        printf("\n2 - Imprimir os campos da struct.");
        printf("\n3 - Sair.");
        scanf("%f", &op);
        
        switch(op){
            case 1:
                printf("Escreva ")
        }
        
    }
}
