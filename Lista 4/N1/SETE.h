#ifndef SETE_H_INCLUDED
#define SETE_H_INCLUDED

#include <stdio.h>

float CALCULA_TAXAS(int horas);

float CALCULA_TAXAS(int horas) {
    float taxa;
    if (horas <= 3) {
        taxa = 20.0;
    } else if (horas < 24) {
        taxa = 20.0 + 5.0 * (horas - 3);
        if (taxa > 50.0) {
            taxa = 50.0;
        }
    } else {
        taxa = 50.0;
    }
    return taxa;
}

void CALCULO_ESTACIONAMENTO() {
    int horas[3];
    float valor[3];
    float total = 0.0;

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Digite as horas estacionadas para o cliente %d: ", i + 1);
        scanf("%d", &horas[i]);


        valor[i] = CALCULA_TAXAS(horas[i]);

        // Acumular o total
        total += valor[i];
    }

    printf("\n--------------------------------------\n");
    printf("Cliente\tHoras\tTaxa\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\t%d\t%.2f\n", i + 1, horas[i], valor[i]);
    }

    printf("--------------------------------------\n");
    printf("TOTAL\t\t%.2f\n", total);

    return 0;
}
#endif // SETE_H_INCLUDED