#include <stdio.h>

int x, y;

int main(void)
{

    printf("Digite uma idade:");
    scanf("%i", &y);
    x=0;

    while (y<=70)
    {
        x=x+y;
        printf("Digite uma idade:");
        scanf("%i", &y);
    }

    printf("Idoso. Soma acomulada %i", x);  
}