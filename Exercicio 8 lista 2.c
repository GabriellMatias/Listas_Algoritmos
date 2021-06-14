#include<stdio.h>

int main(void)
{
    char nome[30], sexo;//declarando as variaveis char pois sao letras
    double peso, altura;
    printf("Informe seu nome:");//lendo variaveis 
    gets(nome);
    printf("Informe sua altura:");
    scanf("%lf", &altura);
    fflush(stdin);
    printf("Informe seu sexo (M/F):");
    sexo = getchar();
    sexo = toupper(sexo);

    if (sexo == 'M')
    {
        peso = (72.5*altura) -58;
        printf("Peso ideal para Ilmo Sr.%s, e %.2lf\n", nome, peso);
    }else if (sexo == 'F')
    {
        peso = (62.1*altura) -44.7;
        printf("Peso ideal para Ilma Sra.%s, e %.2lf\n", nome, peso);
    }else
    {
        printf("Usuario digitou sexo incorreto");
    }
    


    return 0;
}
