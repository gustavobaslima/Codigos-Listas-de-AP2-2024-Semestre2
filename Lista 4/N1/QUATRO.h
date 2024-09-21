#ifndef QUATRO_H_INCLUDED
#define QUATRO_H_INCLUDED


static inline int SOMA_INTERVALO(int num1, int num2) {
    int soma = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        soma += i;
    }

    printf("\n\nO resultado da soma do intervalo entre %d e %d eh igual a: ", num1, num2);

    return soma;
}

#endif // QUATRO_H_INCLUDED