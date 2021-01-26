#include <stdio.h>

#define num_alunos 20

float maiornota;
int i, j, i2;
struct dados_alunos
{
    float nota[4];
    char nome[30];
};
struct dados_alunos alunos[num_alunos];

int main(void)
{
    for (i = 0; i < num_alunos; i++)
    {
        printf("Digite o nome do %i aluno: ", i+1);
        scanf("%s", &alunos[i].nome);
        fflush(stdin);
    }
    
    for (i = 0; i < num_alunos; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite a nota do %i bimestre: ", j+1);
            scanf("%f", &alunos[i].nota[j]);
            fflush(stdin);
        }
        if (alunos[0].nota[3]>-2000)
        {
            maiornota=alunos[0].nota[3];
        }
        if (alunos[i].nota[3]>maiornota)
        {
            i2=i;
        }
    }
    printf("Menor nota no 3 bimestre: %s", alunos[i2].nome);
}