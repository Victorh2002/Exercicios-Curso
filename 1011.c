#include <stdio.h>

int soma(int x, int y)
{
    x=x+y;
    printf("Valor da soma: %i", x);
}

int main()
{
    int X, Y;
    printf("Digite um numero x inteiro: ");
    scanf("%i", &X);
    printf("Digite um numero y inteiro: ");
    scanf("%i", &Y);
    soma(X,Y);
}