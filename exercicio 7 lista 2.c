#include<stdio.h>

int main(void)
{
    double num1, num2, sub1, sub2;
    
    printf("Digite o primeiro numero:");
    scanf("%lf", &num1);
    printf("Digite o segundo numero:");
    scanf("%lf", &num2);

    sub1 = (num1-num2);
    sub2 = (num2-num1);

    if (num1 >= num2)
    {
        printf("Primeiro algarismo e maior que o segundo!\nDiferenca = %.2lf", sub1);
        
    }else 
        printf("Segundo algarismo e maior que o primeiro!\nDiferenca = %.2lf", sub2);


    return 0;
}
