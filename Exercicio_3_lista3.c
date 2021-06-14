#include<stdio.h>

int main(void)
{
    int maior, contadorP=0, Pessoas=10, altura;
    do
    {
        printf("Informe a altura da %i pessoa: \n", contadorP+1);
        scanf("%d", &altura);
        if (contadorP == 0)
        {
            maior=altura;
        }
        if (maior < altura) 
        {
            maior = altura;
        }
        contadorP++;
        
    } while (contadorP != Pessoas);
    printf("A maior altura e : %d", maior);
    return 0;
}
