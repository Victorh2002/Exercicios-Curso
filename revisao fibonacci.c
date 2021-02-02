#include <stdio.h>

#define maxvet 50

void imprimeNaTela(int i, int f)
{
    if (f>=i)
    {
        printf("%d ", i);
        imprimeNaTela(i+1,f);
    }
}

void leiaVetor(int V[], int *tamV)
{   int i;

    printf("\n\nDigite o tamanho do Vetor para somar => ");
    scanf("%d", tamV);

    for (i=0; i<*tamV; i++)
    {
        printf("\nElemento %d => ",i);
        scanf("%d", &V[i]);
    }
}

int somaVetor(int V[],int ini, int tamV)
{   int soma;

    if (tamV-1>=ini)
        soma=V[ini]+somaVetor(V, ini+1, tamV);
    else soma=0;

    return soma;
}

int fatorial(int n)
{   int fat;

    if (n>1)
        fat = n*fatorial(n-1);
    else fat = 1;

    return fat;

}

int fibonacci(int n)
{
    if (n==0)
    return 0;

    else
    if (n==1)
    return 1;

    else
    return (fibonacci(n-1)+fibonacci(n-2));
}

void main(void)
{   int ini, fim, A[maxvet], tamA, n;

    /*printf("\nExperimentos com Recursividade\n");

    printf("\nDigite o valor inicial => ");
    scanf("%d",&ini);

    printf("\nDigite o valor final => ");
    scanf("%d",&fim);

    printf("\nImprimindo: ");
    imprimeNaTela(ini, fim);

    leiaVetor(A, &tamA);

    printf("\nSoma do vetor = %d\n", somaVetor(A, 0, tamA));

    printf("\nDigite o valor de N para a fatorial => ");
    scanf("%d",&n);
    printf("\nFatorial de %d = %d\n", n, fatorial(n));*/

    printf("Digite um numero n: ");
    scanf("%i", &n);
    printf("Fibonacci de %i: %i", n, fibonacci(n));
}