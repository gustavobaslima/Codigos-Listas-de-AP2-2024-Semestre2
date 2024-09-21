#ifndef TRES_H_INCLUDED
#define TRES_H_INCLUDED

void CONVERSOR_SEGUNDOS(){

    int s, ss, m, h;

    printf("\nDigite uma quantidade de segundos para fazer uma conversao para horas, minutos e segundos: ");
    scanf("%d", &s);

    h = s/3600;
    m = (s % 3600)/60;
    ss = s % 60;

    printf("\n%d segundos eh equivalente a %d horas %d minutos e %d segundos.\n", s, h, m, ss);
}

#endif // TRES_H_INCLUDED