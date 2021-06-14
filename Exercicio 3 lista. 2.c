#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    double a, b, c;//declarando variaveis

    printf("Digite a medida do primeiro lado: ");//lendo valores
    scanf("%lf", &a);//salvando valores
    printf("Digite a medida do segundo lado: ");
    scanf("%lf", &b);
    fflush(stdin);//limpando cache
    printf("Digite a medida do terceiro lado: ");
    scanf("%lf", &c);

    if ((a < b+c), (b < c+a), (c < b+a))
    {
        printf("E um triangulo!");
    }
    else printf("Nao e um triangulo!");
    

    return 0;
}
