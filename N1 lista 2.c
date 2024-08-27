#include <stdio.h>

struct VALORES{
    
    char nome[30],Aac[30];
    float vatual,vanterior, variacao;
};

    int main(){
        struct VALORES comp;
        
        printf("\nDigite o nome da companhia:");
        scanf("%s", &comp.nome);
        printf("\nDigite a area de atuacao de companhia:");
        scanf("%s", &comp.Aac);
        printf("\nDigite o valor da bolsa da acao:");
        scanf("%f", &comp.vatual);
        printf("\nDigite o valor anterior da bolsa da acao: ");
        scanf("%f", &comp.vanterior);
        printf("\nDigite o valor em porcentagem que a acao caiu ou cresceu: ");
        scanf("%f", &comp.variacao);
        
        printf("\nNome da companhia: %s ",comp.nome);
        printf("\nArea de atuacao da companhia: %s",comp.Aac);
        printf("\nValor da bolsa: %.f", comp.vatual);
        printf("\nValor anterior da bolsa: %.f", comp.vanterior);
        printf("\nValor que a acao caiu ou cresceu: %.f",comp.variacao);
        }

