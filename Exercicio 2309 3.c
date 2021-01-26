#include <stdio.h>

char c;
int cont;
float n, acomnota, mediaalu, mediageral, maiormedia, acumulador;

int main(void)
{
    printf("Digite sua nota do primeiro bimestre: ");
    scanf("%f", &n);
    fflush(stdin);
    acomnota=n*1;
    printf("Digite sua nota do segundo bimestre: ");
    scanf("%f", &n);
    fflush(stdin);
    acomnota=acomnota+(n*2);
    printf("Digite sua nota do terceiro bimestre: ");
    scanf("%f", &n);
    fflush(stdin);
    acomnota=acomnota+(n*3);
    printf("Digite sua nota do quarto bimestre: ");
    scanf("%f", &n);
    fflush(stdin);
    acomnota=acomnota+(n*4);
    mediaalu=acomnota/10;
    mediageral=mediaalu;
    cont++;
        if (mediaalu>-2000)
        {
            maiormedia=mediaalu;
        }
    printf("Quer continuar? (S/N): ");
    c=getchar();
    fflush(stdin);

    do
    {
        printf("Digite sua nota do primeiro bimestre: ");
        scanf("%f", &n);
        fflush(stdin);
        acomnota=n*1;
        printf("Digite sua nota do segundo bimestre: ");
        scanf("%f", &n);
        fflush(stdin);
        acomnota=acomnota+(n*2);
        printf("Digite sua nota do terceiro bimestre: ");
        scanf("%f", &n);
        fflush(stdin);
        acomnota=acomnota+(n*3);
        printf("Digite sua nota do quarto bimestre: ");
        scanf("%f", &n);
        fflush(stdin);
        acomnota=acomnota+(n*4);
        mediaalu=acomnota/10;
        mediageral=mediageral+mediaalu;
        cont++;
            if (mediaalu>maiormedia)
            {   
                maiormedia=mediaalu;
            }
        printf("Quer continuar? (S/N): ");
        c=getchar();
        fflush(stdin);
    } while (c=='S');
    
    mediageral=mediageral/cont;
    printf("Media anual da turma: %.2f\n", mediageral);
    printf("Maior media anulal: %.2f", maiormedia);
}
