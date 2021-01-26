#include <stdio.h>

int soma(int x, int y, int *z)
{   
    *z=x+y;
}

int main()
{
    int X, Y, Z;
    printf("Digite um numero x inteiro: ");
    scanf("%i", &X);
    printf("Digite um numero y inteiro: ");
    scanf("%i", &Y);
    soma(X, Y, &Z);
    printf("Valor da soma: %i", Z);
}