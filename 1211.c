#include <stdio.h>
#include <math.h>

int distancia(int x1, int x2, int y1, int y2)
{
    int xy1, xy2;
    float raiz;
    xy1=pow(x1-y1, 2);
    xy2=pow(x2-y2, 2);
    raiz=sqrt((xy1)+(xy2));
    printf("Distancia entre 2 pontos: %.2f", raiz); 
}

int main()
{
    int X1, X2, Y1, Y2;
    printf("Digite um valor x1: ");
    scanf("%i", &X1);
    printf("Digite um valor x2: ");
    scanf("%i", &X2);
    printf("Digite um valor y1: ");
    scanf("%i", &Y1);
    printf("Digite um valor y2: ");
    scanf("%i", &Y2);
    distancia(X1, X2, Y1, Y2);
}