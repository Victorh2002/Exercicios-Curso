#include <stdio.h>

float media;
int d, d1, contador, tmaior;

int main(void)
 {
    printf("Digite a temperatura do dia: ");
    scanf("%i", &d);
    d1=d;
    contador=1;
    
    if (d>-2000)
    {
        tmaior=d;
    }
    
    while (contador<=7)
    {
        printf("Digite a temperatura do dia: ");
        scanf("%i", &d);
        d1=d1+d;
        contador++;

         if (d>tmaior)
        {
            tmaior=d;
        }
    }

    media=(float)d1/contador;
    printf("Media semanal da temperatura: %.2f\n", media);
    printf("Maior temperatura: %i", tmaior);
 }