#include <stdio.h>

struct HORARIO{
    
        int horas, minutos, segundos;
};

struct DATA{
    
        int dias,mes,anos;
};

struct AGENDA{
        struct HORARIO horario;
        struct DATA data;
        char texto[99];
        
};
    
int main(){
    struct AGENDA menu;
    int op;
    
    do{
        printf("\nEscolha uma das alternativas do menu interativo.");
        printf("\n1 - Preencher os campos da struct.");
        printf("\n2 - Imprimir os campos da struct.");
        printf("\n3 - Sair.");
        printf("\n");
        scanf("%d", &op);
        
        switch(op){
            case 1:
                printf("\nEscreva o 'Horario' em horas: ");
                scanf("%d", &menu.horario.horas);
                printf("\nEscreva o 'Horario' em minutos: ");
                scanf("%d", &menu.horario.minutos);
                printf("\nEscreva o 'Horario' em segundos: ");
                scanf("%d", &menu.horario.segundos);              
                
                printf("\nEscreva a 'Data' em dias(numero): ");
                scanf("%d", &menu.data.dias);
                printf("\nEscreva a 'Data' em meses(numero): ");
                scanf("%d", &menu.data.mes);
                printf("\nEscreva a 'Data' em anos(numero): ");
                scanf("%d", &menu.data.anos);
                
                printf("\nEscreva o texto que descreve o compromisso: ");
                scanf(" %[^\n]", menu.texto);
                break;

            case 2:
                printf("\nHorario: %.d horas, %.d minutos e %.d segundos.", menu.horario.horas, menu.horario.minutos, menu.horario.segundos);
                printf("\nData: dia %.d do %.d de %.d.", menu.data.dias, menu.data.mes,menu.data.anos);
                printf("\nTexto do Compromisso: %s", menu.texto);
                break;

            case 3: 
                printf("Saindo do programa.");
                break;

                default:
                printf("Opcao invalida, tente novamente.");
                break;
        }
    }while (op!=3);
    
    return 0;
        
    }