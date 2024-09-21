#include <stdio.h>

struct DADOS{
char rua[99];
int numero;
int cep;
};

struct INFO{
char nome[99];
struct DADOS dados;
float saldo;
};

int main(){
struct INFO info;

printf("Escreva o nome.");
fgets(info.nome, 99, stdin);

printf("Escreva a rua.");
fgets(info.dados.rua, 99, stdin);

printf("Escreva o numero.");
scanf("%d", &info.dados.numero);

printf("Escreva o CEP.");
scanf("%d", &info.dados.cep);

printf("Escreva o saldo.");
scanf("%f", &info.saldo);
}