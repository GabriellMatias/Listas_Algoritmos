#include<stdio.h>

int main(void)
{
    double num1, num2, num3;
    
    printf("Digite o primeiro numero:");
    scanf("%lf", &num1);
    fflush(stdin);
    printf("Digite o segundo numero:");
    scanf("%lf", &num2);
    printf("Digite o terceiro numero:");
    scanf("%lf", &num3);
   

    if (num1 >= num2 && num1 >= num3)
    {
        printf("Numero mais alto:%.2lf", num1);
    }else if (num2 >= num1 && num2 >= num3)
    {
        printf("Numero mais alto:%.2lf", num2);
    }else if (num3 >= num1 && num3 >= num2)
    {
        printf("Numero mais alto:%.2lf", num3);
    }
      

    return 0;
}
