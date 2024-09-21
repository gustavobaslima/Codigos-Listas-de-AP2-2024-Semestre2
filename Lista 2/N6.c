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
