#include <stdio.h>

#define TamVet 3

void LerVet(int Vet[])
{
    int i;
    for (i = 0; i < TamVet; i++)
    {
        printf("\nValor Inteiro na posicao %i: %i\n", i+1, Vet[i]);
    }  
}
void EscreverVet(int Vet[])
{
    int i;
    for (i = 0; i < TamVet; i++)
    {
        printf("\nDigite um Valor Inteiro na posicao %i: ", i+1);
        scanf("%i", &Vet[i]);
        fflush(stdin);
    }
    return Vet[TamVet];  
}
float MediaVet(int Vet[])
{
    int i;
    float Media;
    for (i = 0; i < TamVet; i++)
    {
        Media=Media+Vet[i];
    }
    Media=Media/TamVet;
    return Media;   
} 
int main()
{
    int Vet[TamVet];
    char Escolha=0, Continuar='S';
    float Media;
    EscreverVet(Vet);
    LerVet(Vet);
    Media=MediaVet(Vet);
    printf("\nMedia dos Vetores: %.2f", Media);  
}