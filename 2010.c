#include <stdio.h>

#define linhas 10
#define colunas 10

int l, c, valor[linhas][colunas], somador=0;

int main(void)
 {
     for (l = 0; l < linhas; l++)
     {
        for (c = 0; c < colunas; c++)
        {
            printf("Digite um valor inteiro: ");
            scanf("%d", &valor[l][c]);
        } 
     }

     for (l = 0; l < linhas; l++)
     {
        for (c = 0; c < colunas; c++)
        {
            if (l>c)
            {
                somador=somador+valor[l][c];
            }
        } 
     }

     printf("Valor da soma dos numero abaixo da diagonal principal: %i", somador);
 }