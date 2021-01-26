#include <stdio.h>

float combinacao;

int fatorial(int n)
{
    int fat=1;
    int i=1;
    while (i<=n)
    {
        fat=fat*i;
        i=i+1;
    }
    return (fat);
}

int main()
{
    int N, P;
    do
    {
        printf("Digite o valor de N: ");
        scanf("%i", &N);
        printf("Digite o valor de P: ");
        scanf("%i", &P);
    } while (P>N);
    combinacao=fatorial(N)/(fatorial(P)*fatorial(N-P));
    printf("Combinacao de %i elementos tomados %i a %i: %.2f\n", N, P, P, combinacao);
}