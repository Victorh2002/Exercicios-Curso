#include <stdio.h>

#define TAM 5

struct dados_alunos
{
    int ra;
    char nome[30];
    char curso[20];
    float media;
};

struct dados_alunos aluno[TAM];
struct dados_alunos aux;
int i, j, min;
char menu, continuar='S', gl;
FILE *fp;

int cadastrar()
{
    for (i = 0; i < TAM; i++)
    {
        printf("\nDigite o Nome do aluno %i: ", i+1);
        gets(aluno[i].nome);
        fflush(stdin);
        printf("\nDigite o RA do aluno %i: ", i+1);
        scanf("%i", &aluno[i].ra);
        fflush(stdin);
        printf("\nDigite o Curso do aluno %i: ", i+1);
        gets(aluno[i].curso);
        fflush(stdin);
        printf("\nDigite a Media Global do aluno %i: ", i+1);
        scanf("%f", &aluno[i].media);
        fflush(stdin);
    }
}

int exibir()
{
    for (i = 0; i < TAM; i++)
    {
        printf("\n------Aluno %i------", i+1);
        printf("\nNome: %s", aluno[i].nome);
        printf("\nRA: %i", aluno[i].ra);
        printf("\nCurso: %s", aluno[i].curso);
        printf("\nMedia Global: %.2f", aluno[i].media);
    }
}

int ordenacao()
{
    for (i = 0; i < TAM-1 ; i++)
    {
        min=i;
            for ( j = i+1; j < TAM ; j++ )  
            {
                if (aluno[j].ra < aluno[min].ra) 
                {
                    min=j;
                }    
            }
            aux=aluno[min];
            aluno[min]=aluno[i];
            aluno[i]=aux;
    }
}

int gravacao_e_leitura()
{
    if (gl=='G')
    {
        if((fp=fopen("dados.txt","w+b"))==NULL)
        {
            printf("Arquivo nao pode ser aberto");
        }
        fp = fopen("dados.txt", "w+b");
        for (i = 0; i < TAM; i++)
        {
            fwrite(&aluno[i],sizeof(struct dados_alunos),1,fp);
        }
    }else
    {
        if ((fp=fopen("dados.txt","r+b"))==NULL)
        {
            printf("Arquivo nao pode ser aberto");
        }
        fp = fopen("dados.txt", "r+b");
        for (i = 0; i < TAM; i++)
        {
            fread(&aluno[i],sizeof(struct dados_alunos),1,fp);
        }
    }
}

int main()
{
    do
    {
        printf("\n\n************Cadastro de Alunos 1.0************\n");
        printf("\n1) Cadastrar Dados\n");
        printf("\n2) Exibir Dados Cadastrados\n");
        printf("\n3) Ordenar Dados pelo RA\n");
        printf("\n4) Gravar Dados em Arquivo\n");
        printf("\n5) Ler Dados Gravados em Arquivo\n");
        printf("\n6) Sair do programa\n");
        printf("\nOpcao:");
        menu=getchar();
        fflush(stdin);
        
        switch (menu)
        {
        case '1':
            cadastrar();
            break;

        case '2':
            exibir();
            break;

        case '3':
            ordenacao();
            break;

        case '4':
            gl='G';
            gravacao_e_leitura();
            break;

        case '5':
            gl='L';
            gravacao_e_leitura();
            break;

        case '6':
            continuar='N';
            break;    
        }  
    }while (continuar=='S');
    fclose(fp);
}