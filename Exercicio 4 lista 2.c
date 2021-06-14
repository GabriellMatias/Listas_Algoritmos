#include<stdio.h>

int main(void)
{
    char nome[30], sexo;//declarando as variaveis char pois sao letras

    printf("Informe seu nome:");//lendo variaveis 
    gets(nome);
    printf("Informe seu sexo (M/F):");
    sexo = getchar();
    sexo = toupper(sexo);

    if (sexo == 'M')
    {
        printf("Ilmo Sr.%s\n", nome);
    }else if (sexo == 'F')
    {
        printf("Ilma Sra.%s\n", nome);
    }else
    {
        printf("Usuario digitou sexo incorreto");
    }
    
    

    return 0;
}
