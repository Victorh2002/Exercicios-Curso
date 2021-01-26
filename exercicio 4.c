#include <stdio.h>

int m, n;

int main(void)
{
 printf("Digite o valor n:");
 scanf("%d", &n);
 printf("Digite o valor m:");
 scanf("%d", &m);

  while (m>=n)
   {
    printf("%i\n", m);
    m=m-1;
   }
}
