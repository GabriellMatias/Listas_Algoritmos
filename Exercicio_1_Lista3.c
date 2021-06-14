//calcular um numero fatorial
#include<stdio.h>

int main(void)
{
    int num, fatorial;
    printf("Digite o numero:");
    scanf("%d", &num);
    fflush(stdin);
    for ( ; num >= 1; --num)
    {
        fatorial *= num;
    }
    printf("Numero fatorial = %d\n", &fatorial);


    return 0;
}
