#include<stdio.h>

int main(void)
{
    int anoN, anoA, anosV, dias;
    char nome[30];
    printf("Digite seu nome:");
    fgets(nome, 30, stdin);
    printf("informe o ano do seu nascimento:");
    scanf("%d", &anoN);
    printf("Informe o ano atual:");
    scanf("%d", &anoA);

    anosV = (anoA - anoN);
    dias = (anosV*360);

    printf("Nome:%s\nIdade aproximada:%d\nDias vividos aproximadamente:%d", nome, anosV, dias);





    return 0;
}
