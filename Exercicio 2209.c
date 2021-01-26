#include <stdio.h>

float pm;
int sm, sf, i, h; //sm=sexo masculino, sf=sexo feminino, i=idade
char s, c, gdc;

int main(void)
 {
    do
    {
        printf("Qual o seu sexo (M/F):");
        scanf("%c", &s);
        fflush(stdin);
        printf("Qual a sua idade:");
        scanf("%i", &i);
        fflush(stdin);
        printf("Esta gostando do seu curso? (S/N):");
        scanf("%c", &gdc);
        fflush(stdin);
        printf("Quer continuar? (S/N):");
        scanf("%c", &c);
        fflush(stdin);
           
           if (i>=23 && s=='M' && gdc=='N')
           {
               h++;
           }
           
           
           if (s=='M')
           {
               sm++;
           }
           else
           {
               sf++;
           }
           
    } 
    while (c=='S');

    printf("Numero de homens entevistados: %i\n", sm);
    printf("Numero de mulheres entrevistadas: %i\n", sf);
    pm=(float)sf/(sf+sm)*100;
    printf("Porcentagem de mulheres: %.2f\n", pm);
    printf("Numero de homens acima de 23 anos insatisfeitos com seu curso: %i", h);
 }