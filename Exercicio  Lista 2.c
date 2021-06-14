#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    double num, modulo;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    modulo = num*-1;

    printf("O modulo e:%.2lf ", modulo);

    return 0;
}
