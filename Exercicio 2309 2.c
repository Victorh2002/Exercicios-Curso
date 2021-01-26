#include <stdio.h>

float media;
int d, d1, contador, tmaior;
char c;

int main(void)
 {
    printf("Digite a temperatura do dia: ");
    scanf("%i", &d);
    fflush(stdin);
    d1=d;
    contador=1;
    
    if (d>-2000)
    {
        tmaior=d;
    }
    
    printf("Quer continuar? (S/N): ");
    c=getchar();
    fflush(stdin);

    do
    {
        printf("Digite a temperatura do dia: ");
        scanf("%i", &d);
        fflush(stdin);
        d1=d1+d;
        contador++;

         if (d>tmaior)
        {
            tmaior=d;
        }
        printf("Quer continuar? (S/N): ");
        c=getchar();
        fflush(stdin);

    } while (c=='S');
    

    media=(float)d1/contador;
    printf("Media semanal da temperatura: %.2f\n", media);
    printf("Maior temperatura: %i", tmaior);
 }