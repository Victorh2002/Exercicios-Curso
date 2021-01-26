#include <stdio.h>

int x, y, quant;

float media;

int main(void)
{

    printf("Digite uma idade:");
    scanf("%i", &y);
    x=0;
    quant=0;

    while (y<=70)
    {
        x=x+y;
        quant++;
        printf("Digite uma idade:");
        scanf("%i", &y);
    }
    
    media=(float)x/quant;
    printf("A media das idades de %i pessoas e: %.2f", quant, media);
}