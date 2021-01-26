#include <stdio.h>
#include <string.h>

char palavra [20], caracter;
int i, tam, contador;

int main(void)
 {
    printf("Digite uma palavra de ate 20 letras: ");
    gets(palavra);
    fflush(stdin);
    printf("Digite um caracter: ");
    caracter=getchar();
    fflush(stdin);

    tam=strlen(palavra);
    for(i=0;i<tam;i++)
     {
         if (palavra [i]==caracter)
         {
            contador++;
         }
         
     }

    printf("Quantidade de vezes em que apareceu o caracter %c: %i", caracter, contador);
 }