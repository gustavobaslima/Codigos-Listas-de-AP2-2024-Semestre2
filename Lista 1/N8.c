#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, tamanho, eh_palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (tolower(palavra[i]) != tolower(palavra[tamanho - 1 - i])) {
            eh_palindromo = 0; // Não é palíndromo
            break;
        }
    }

    if (eh_palindromo) {
        printf("%s eh palindroma\n", palavra);
    } else {
        printf("%s nao eh palindroma\n", palavra);
    }

    return 0;
}