#include <stdio.h>
#include <string.h>

typedef char tipoNome[50];

typedef struct tipoReg {
    tipoNome nome;
    int idade;
} tipoReg;

typedef tipoReg tipoFichario[100];

tipoFichario fichario;
int tamFichario = 0;

int menuOpcao(void)
{   int op;

    printf("\nEscolha uma Opcao:\n");
    printf("\n1 - Inserir registro");
    printf("\n2 - Remover registro");
    printf("\n3 - Mostrar fichario");
    printf("\n4 - Sair");
    printf("\nOpcao > ");

    scanf("%d", &op);

    return (op);
}

void insereRegistro(tipoReg *reg)
{
    printf("\nDigite nome > ");
    scanf("%s", reg->nome);
    printf("Digite a idade > ");
    scanf("%d",&(reg->idade));
}

void mostraFichario(tipoFichario fichario, int tam)
{   int i;

    printf("\nRegistros do Fichario:\n");

    for (i=0; i<tam; i++)
    {
        printf("\nNome %d > %s ", i, fichario[i].nome);
        printf("\nIdade %d > %d \n", i, fichario[i].idade);
    }
}

void removeRegistro(tipoFichario fichario, int *tam, tipoNome nome)
{
    int i=0, acabou=0;
    printf("%s", nome);
    do
    {
        if (strcmp(fichario[i].nome, nome))
        {
            printf("bbbbbbbbb");
            fichario[i]=fichario[*tam-1];
            tam--;
            acabou=1;
        }
        i++;
    } while ((i<=*tam-1) && (acabou=0));
    
}

void main(void)
{   int opcao;
    tipoNome nome;

    do
    {

        printf("\n\nPrograma de Cadastro de Registros\n");

        opcao=menuOpcao();

        switch (opcao)
        {
        case 1: insereRegistro(&fichario[tamFichario]);
                tamFichario++;
                break;
        case 2: printf("\nDigite o nome a ser removido > ");
                scanf("%s", nome);
                removeRegistro(fichario, &tamFichario, nome);
                //tamFichario--;
                break;
        case 3: mostraFichario(fichario, tamFichario);
                break;
        }
    } while (opcao!=4);
}