#include <stdio.h>

//#define linhas 4
//#define colunas 4

int i, j;
float matriz[3][3];

int main(void)
 {
  for (i=0;i<3;i++)
    for (j=0;j<3;j++)
     {
      printf("Digite um valor real para a linha [%d] e coluna [%d]: ",i,j);
      scanf("%f",&matriz[i][j]);
     }

  printf("\n\n");

  for (i=0;i<3;i++)
    {
     for (j=0;j<3;j++)
      printf(" %-3.2f ",matriz[i][j]);

      printf("\n");
    }
  }
