#include <stdio.h>

#define linhas 30
#define colunas 4

int l, c, contador;
float alunos[linhas][colunas], media;

int main(void)
 {
     for (l = 0; l < linhas; l++)
     {
        for (c = 0; c < colunas; c++)
        {
            printf("Digite a nota %i do aluno %i: ", c+1, l+1);
            scanf("%f", &alunos[l][c]);
        }
        
     }

     for (l = 0; l < linhas; l++)
     {
        media=alunos[l][0]+alunos[l][1]+alunos[l][2]+alunos[l][3];
        printf("Media do aluno %i: %.2f\n", l,  media);
        
        if (alunos[l][2]>=3.0 && alunos[l][2]<=6.0)
        {
            contador++;
        } 
     }
     printf("Aluno com nota entre 3,0 e 6,0 no 3 bimestre: %i", contador);
 }