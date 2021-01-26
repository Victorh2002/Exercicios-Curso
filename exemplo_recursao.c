#include <stdio.h>

void print(int N, int B)
{
    if (B<=N)
    {
        printf("%i\n", B);
        print(N, B+3);
    }
} 

int main()
{
    int n;
    printf("Digite um valor n: ");
    scanf("%i", &n);
    print(n, 0);
}