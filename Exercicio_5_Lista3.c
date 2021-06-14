#include<stdio.h>

int main(void)
{
    int N, Fatorial = 1, cont=0;

    printf("Digite o Valor a ser convertido:");
    scanf("%d", &N);


        while (N > cont)
        {
            Fatorial *= (N - cont);
            cont++;
        }
    
    printf("O Fatorial do numero %d, e igual a: %d", N, Fatorial);

    return 0;
}
