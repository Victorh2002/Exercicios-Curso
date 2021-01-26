#include <stdio.h>

float temperatura[12], mediatemp;
int contadordia, i=0, contador; 

int main(void)
 { 
    contadordia=1;
    printf("Digite a temperatura do dia %i: ", contadordia);
    scanf("%f", &temperatura[i]);
    if (temperatura[i]<0)
    {
        contador++;
    }
    mediatemp=temperatura[i];
    contadordia++;

    for (i = 1; i <= 11; i++)
    {
        printf("Digite a temperatura do dia %i: ", contadordia);
        scanf("%f", &temperatura[i]);
        contadordia++;

        if (temperatura[i]<0)
        {
            contador++;
        }
        
        mediatemp=temperatura[i]+mediatemp;
    }
    printf("Quantos dias a temperatura negativa: %i\n", contador);
    mediatemp=mediatemp/12;
    printf("Media de temperatura dos 12 dias: %.2f\n", mediatemp);
    //O printf abaixo dentro do for será pra mostrar que estou realmente colentando as temperaturas
    //pois achei que colentando separadamente usando a variável mediatemp seria mais organizado
    for (i=0; i<12; i++)
    {
        printf("Valor armazenado na posicao [%d]: %.2f\n", i, temperatura[i]);
    } 
 }


