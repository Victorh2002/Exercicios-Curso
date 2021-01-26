#include <stdio.h>

int soma;

void fun_recur(int I, int J, int K)
{
    if (I<=J)
    {
        soma=soma+I;
        fun_recur(I+K, J, K);
    }
    else 
    {
        printf("Soma: %i", soma);
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
    fun_recur(i, j, k);
}