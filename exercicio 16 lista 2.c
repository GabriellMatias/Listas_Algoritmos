#include<stdio.h>

int main(void)
{
    double altura1, altura2, altura3;
    char nome1[30], nome2[30], nome3[30];
    
    printf("Informe seu nome:");
    fgets(nome1, 30, stdin);
    printf("Digite sua altura:");
    scanf("%lf", &altura1);
    fflush(stdin);
    printf("Informe seu nome:");
    fgets(nome2, 30, stdin);
    printf("Digite sua altura:");
    scanf("%lf", &altura2);
    fflush(stdin);
    printf("Informe seu nome:");
    fgets(nome3, 30, stdin);
    printf("Digite sua altura:");
    scanf("%lf", &altura3);
    fflush(stdin);

    if (altura1 >= altura2 && altura1 >= altura3)
    {
        printf("Pessoa mais alta:%sAltura:%.2lf", nome1, altura1);
    }else if (altura2 >= altura1 && altura2 >= altura3)
    {
        printf("Pessoa mais alta:%sAltura:%.2lf", nome2, altura2);
    }else if (altura3 >= altura1 && altura3 >= altura2)
    {
        printf("Pessoa mais alta:%sAltura:%.2lf", nome3, altura3);
    }
      

    return 0;
}
