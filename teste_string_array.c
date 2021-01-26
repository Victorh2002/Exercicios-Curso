#include <stdio.h>

int i, cont=0;

char vetor_str[10][30];

int main(void)
 {
for (i=0; i<10; i++)
  {
   printf("Digite um nome: ");
   gets(vetor_str[i]);
  }

for (i=0;i<10;i++)
  {
   if(vetor_str[i][0]=='c');
    {
        cont++;
    }
  }
 } 