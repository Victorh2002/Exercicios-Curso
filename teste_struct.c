#include <stdio.h>

struct dados_aluno
{
    char nome[20], telefone[18], email[30];
    float altura, peso;
    int idade;
};

struct dados_aluno aluno;

int main(void)
{
    printf("Digite o nome da pessoa: ");
    gets(aluno.nome);
    fflush(stdin);
    printf("Digite a altura: ");
    scanf("%f", &aluno.altura);
    fflush(stdin);
    printf("Digite o peso: ");
    scanf("%f", &aluno.peso);
    fflush(stdin);
    printf("Digite a idade: ");
    scanf("%i", &aluno.idade);
    fflush(stdin);
    printf("Digite o telefone: ");
    gets(aluno.telefone);
    fflush(stdin);
    printf("Digite o email: ");
    gets(aluno.email);
    fflush(stdin);

    printf("\n\n\n");

    printf("Nome: %s\n", aluno.nome);
    printf("Altura: %.2f\n", aluno.altura);
    printf("Peso: %.2f\n", aluno.peso);
    printf("Idade: %i\n", aluno.idade);
    printf("Telefone: %s\n", aluno.telefone);
    printf("Email: %s", aluno.email);
}
