#include <stdio.h>

float pot(float X, float Y)
{
    if (Y==0)
    {
        return 1;
    }
    else
    {
        return X*pot(X, Y-1);
    }
}
int main()
{
    float x, y;
    do
    {
        printf("Digite um numero x: ");
        scanf("%f", &x);
        printf("Digite um numero y: ");
        scanf("%f", &y);
    } while (x<=0 && y<=0);
    pot(x, y);
    printf("\nResultado: %.0f", pot(x, y));
}