#include <stdio.h>
#include <string.h>

char a [20];

int main(void)
{
    printf("Digite uma palavra: ");
    gets(a);
    printf("valor de a: %c", a [0]);
}