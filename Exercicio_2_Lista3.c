#include<stdio.h>
int main(void)
{
    int num1, num2, soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    for (int i = 0; i < num2; i++, soma+=num1);
    {
    
    }
    printf("O valor da multiplicacao e: %d", soma);
    return 0;
}
