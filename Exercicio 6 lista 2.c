#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;//declarar variavel inteira
    printf("Informe o numero: "); 
    scanf("%d", &num);
    fflush(stdin);//limpando cache

if (num % 2 == 0)//condicao para que seja par 
{
    printf("Numero par");
}else {
    printf("Numero impar");
}

    return 0;
}
