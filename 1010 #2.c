#include <stdio.h>

float temperatura[12];
int contadordia, i=0, contador; 

int main(void)
 { 
    contadordia=1;
    printf("Digite a temperatura do dia %i: ", contadordia);
    scanf("%f", &temperatura[i]);
    contadordia++;

    for (i = 1; i <= 11; i++)
    {
        printf("Digite a temperatura do dia %i: ", contadordia);
        scanf("%f", &temperatura[i]);
        contadordia++;
    }

    for (i = 0; i <= 10; i++)
    {
        if (temperatura[i]==temperatura[11])
        {
            contador++;
        }
        
    }
    printf("Quantidade de dias que a temperatura ficou igual a do ultimo dia: %i", contador);
 }            