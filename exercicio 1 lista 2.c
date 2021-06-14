#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char Placa[90]; //decalrando variaveis
    int Velocidade;

    printf("Digite a velocidade do veiculo: ");//imprimindo na tela a velocidade e a placa
    scanf("%d", &Velocidade);
    fflush(stdin);//limpando cache
    printf("Digite a placa do veiculo: ");
    gets(Placa);

    if (Velocidade > 80)//condicao da velocidade permitida
    {
        printf("Multado por excesso de velocidade\n");
    }else printf("");//para que ele nao imprima nada caso o veiculo nao ultrapasse a velocidade
    
    printf("Velocidade = %dKm/h\nPlaca = %s", Velocidade, Placa);
    
    return 0;//final
}
