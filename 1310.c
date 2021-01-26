#include <stdio.h>

char nome[10] [30];
int i;

int main(void)
 {
    for (i = 0; i <=9 ; i++)
    {
        printf("Digite o nome numero %i com limite de 30 caracteres: ", i+1);
        gets(nome[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (nome[i] [0]=='c' || nome[i] [0]=='C')
        {
            printf("%s\n", nome[i]);
        }
    }
 }