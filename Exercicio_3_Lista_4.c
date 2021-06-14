#include<stdio.h>

int main(void)
{
    int ouro[2], prata[2], bronze[2];
    char paises[2];

    printf("DIGITE O NOME DO PRIMEIRO PAIS:\n");
    scanf("%s", &paises[0]);
    printf("DIGITE O NOME DO SEGUNDO PAIS:\n");
    scanf("%s", &paises[1]);
    printf("DIGITE O NOME DO TERCEIRO PAIS:\n");
    scanf("%s", &paises[2]);

    for (int i = 0; i < 2; i++)
    {
        printf("QUANTIDADE DE MEDALHAS DE OURO QUE O PAIS %s POSSUI: \n", paises[i]);
        scanf("%i", &ouro[i]);
        printf("QUANTIDADE DE MEDALHAS DE PRATA QUE O PAIS %s POSSUI: \n", paises[i]);
        scanf("%i", &prata[i]);
        printf("QUANTIDADE DE MEDALHAS DE BRONZE QUE O PAIS %s POSSUI: \n", paises[i]);
        scanf("%i", &bronze[i]);
    }
    
    return 0;
}

