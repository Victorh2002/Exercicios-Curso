#include <stdio.h>

int i=0;
float temp[12];

int main()
{
    do
    {
        printf("temperatura: ");
        scanf("%f", &temp[i]);
        i++;
    } while (i<12);
    for (i = 0; i < 12; i++)
    {
        printf("temperatura: %f", temp[i]);
    }
}