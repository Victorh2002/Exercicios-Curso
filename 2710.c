#include <stdio.h>

#define num_carros 30

float menorpreco;
int i, j, i2;
struct dados_carros
{
    char modelo[10], placa[10];
    int ano;
    float preco;
};
struct dados_carros carros[num_carros];

int main(void)
{
    for (i = 0; i < num_carros; i++)
    {
        printf("Digite o Modelo: ");
        scanf("%s", &carros[i].modelo);
        fflush(stdin);
        printf("Digite o Ano: ");
        scanf("%i", &carros[i].ano);
        fflush(stdin);
        printf("Digite o Preco: ");
        scanf("%f", &carros[i].preco);
        fflush(stdin);
        printf("Digite a Placa: ");
        scanf("%s", &carros[i].placa);
        fflush(stdin);

        if (carros[0].preco>-2000)
        {
            menorpreco=carros[0].preco;
        }
        if (carros[i].preco<menorpreco)
        {
            i2=i;
        }
    }

    printf("Carro com menor preço: %s\nPreco: %.2f\nAno: %i", carros[i2].modelo, carros[i2].preco, carros[i2].ano);
}
