#include <stdio.h>

float temp[12];
int i;

void exibicao(float TEMP[], int tam)
{
    for (i = 0; i < tam; i++)
    {
        printf("Temperatura no dia %i: %.2f\n", i+1, TEMP[i]);
    }  
}

void conversao(float TEMP[], int tam)
{
    for (i = 0; i < tam; i++)
    {
        TEMP[i]=TEMP[i]*1.8+32;
    }
}

int main()
{
    int tam=12;
    for (i = 0; i < tam; i++)
    {
        printf("Digite a temperatura do dia %i: ", i+1);
        scanf("%f", &temp[i]);
    }
    exibicao(temp, 12);
    conversao(temp, 12);
    exibicao(temp, 12);
}