#include <stdio.h>

int soma;

int fun_recur(int I, int J, int K)
{
    if (I<=J)
    {
        return I+fun_recur(I+K, J, K);
    }
    else 
    {
        return 0;
    }    
}

int main()
{
    int i, j, k;
    printf("Digite um numero i: ");
    scanf("%i", &i);
    printf("Digite um numero j: ");
    scanf("%i", &j);
    printf("Digite um numero de intervalo k: ");
    scanf("%i", &k);
    printf("Soma: %i", fun_recur(i, j, k));
}