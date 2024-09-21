#include <stdio.h>
#include <string.h>

struct DATANASC{
    int dia;
    int mes;
    int ano;
};

struct LOCAL{
    char bairro[99];
    char rua[99];
    int numero;
};


struct FICHA{
    char nome[99];
    char email[99];
    struct DATANASC datanasc;
    struct LOCAL local;
    int idade; 
    float altura; 
    char cpf[12];
    char sexo[10];
    float peso;
    char id[99];
};



int main(){
    struct FICHA ficha; 
    float imc;
    printf("\nEscreva o nome do cliente: ");
    scanf(" %99[^\n]", &ficha.nome);
    printf("\nEscreva o email do cliente: ");
    scanf(" %99[^\n]", &ficha.email);
    printf("\nEscreva sua data de nascimento(sem barras, separando por espaco).");
    scanf("%d %d %d", &ficha.datanasc.dia, &ficha.datanasc.mes, &ficha.datanasc.ano);
    printf("\nEscreva a rua do cliente.");
    scanf(" %99[^\n]", &ficha.local.rua);
    printf("\nEscreva o bairro do cliente.");
    scanf(" %99[^\n]", &ficha.local.bairro);
    printf("\nEscreva o numero da casa do cliente.");
    scanf("%d", &ficha.local.numero);
    printf("\nEscreva a idade do cliente.");
    scanf("%d", &ficha.idade);
    printf("\nEscreva a altura do cliente em metros.");
    scanf("%f", &ficha.altura);
    printf("\nEscreva o peso do cliente.");
    scanf("%f", &ficha.peso);
    printf("\nEscreva o CPF do cliente.");
    scanf("%11s", ficha.cpf);
    printf("\nEscreva o sexo do cliente.");
    scanf(" %99[^\n]", &ficha.sexo);
    printf("\nEscreva o 'ID' que sera comparado com o nome.");
    scanf(" %99[^\n]", &ficha.id);
    imc = ficha.peso/ (ficha.altura * ficha.altura);
     
    //Impressão dos dados da ficha :p

    printf("\n| -- FICHA DO CLIENTE --|");
    printf("\nNome: %s", ficha.nome);
    printf("\nEmail: %s ", ficha.email);
    printf("\nData de Nascimento: %d do %d de %d ", ficha.datanasc.dia, ficha.datanasc.mes, ficha.datanasc.ano);
    printf("\nEndereco: Rua %s Numero %d Bairro %s", ficha.local.rua, ficha.local.numero, ficha.local.bairro);
    printf("\nIdade: %d ", ficha.idade);
    printf("\nAltura %.2f ", ficha.altura);
    printf("\nCPF: %11s", ficha.cpf);
    printf("\nPeso: %.2f", ficha.peso);
    printf("\nSexo:%11s ", ficha.sexo);
    printf("\nIMC: %.2f", imc);
    
    if(strcmp(ficha.id, ficha.nome) == 0){
        printf("\nO 'ID' eh igual ao 'nome'.");
    }else{
        printf("\nO 'ID' nao eh igual ao 'nome'.");
    }
    printf("\n|-- FICHA DO CLIENTE --|");
    return 0;
}