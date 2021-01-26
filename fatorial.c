#include <stdio.h>

int i, n , fat;

void main(void)
{
fat=1;
i=1;
printf("Digite um valor para n: ");
scanf("%d", &n);
while (i<=n)
{
fat=fat*i;
i=i+1;
}
printf("Fatorial do numero: %d", fat);
}