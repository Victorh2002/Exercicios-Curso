#include <stdio.h>
#include <string.h>

char palavra [20]; //,palavra2 [20];
int i, tam, contador;

int main(void)
 {
    printf("Digite uma palavra de ate 20 letras: ");
    gets(palavra);
    fflush(stdin);
    tam=strlen(palavra);
    i=0;

    while (i!=tam)
     {
         printf("%c", palavra [i]); 
         if (palavra [i]==palavra [tam-1])
         {
            printf("%i, %i\n", i, tam-1);
            contador++;
         }
         i++;
         tam--;
     }
    
    printf("Contador: %i", contador);
    //tam=tam/2;
    if (tam==contador)
    {
        printf("E um palindromo");
    }
     else
     {
        printf("Nao e um palindromo");
     }
    
 }   