#include <stdio.h>

int n, i;

int main(void)
 {
    printf("Digite o numero n:");
    scanf("%i", &n);
    i=4;
    while (i<=n)
    {
        printf("%i\n", i);
        i=i+4;
    }
 }
