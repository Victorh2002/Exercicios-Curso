#include <stdio.h>

int fatorial(int x, int *y)
{
    int fat=1;
    int i=1;
    while (i<=x)
    {
        fat=fat*i;
        i=i+1;
    }
    *y=fat;   
}

int main()
{
    int x, y;
    printf("Digite um valor x: ");
    scanf("%i", &x);
    fatorial(x, &y);
    printf("Fatorial de %i: %i", x, y);

}