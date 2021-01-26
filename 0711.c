#include <stdio.h>

float temp, mediatemp;
char coleta, exibicao; 

int temperatura()
{
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("Digite a temperatura do dia %i em %c: ", i+1, coleta);
        scanf("%f", &temp);
        fflush(stdin);
        mediatemp=mediatemp+temp;
    }

    mediatemp=mediatemp/7;
    return (mediatemp);
}

int main()
{
    printf("Voce ira coletar as temperaturas em Celcius ou em Fahreinheit?(C/F) ");
    coleta=getchar();
    fflush(stdin);
    temperatura();
    printf("Quer que exiba as temperaturas em Celcius ou em Fahreinheit:(C/F) ");
    exibicao=getchar();
    fflush(stdin);

    if (exibicao=='C' && coleta=='F')
    {
        mediatemp=(mediatemp-32)/1.8;
        printf("Media semanal em %c: %.2f", exibicao, mediatemp);
    }
    else if (exibicao=='F' && coleta=='C')
        {
            mediatemp=(mediatemp*1.8)+32;
            printf("Media semanal em %c: %.2f", exibicao, mediatemp);
        }
        else
        {
            printf("Media semanal em %c: %.2f", exibicao, mediatemp);
        }
}