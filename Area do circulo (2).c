//algoritmo areaCirculo;
// Síntese
//  Objetivo: Construa um algoritmo que calcule a área de um círculo  
//  Entrada : raio
//  Saída   : area
//principal
	// Declarações de variavéis
	//real raio, area;
    // Instruções
    //Entrada - pergunta ao usuário
	//escreva("Informe o valor do raio: ");
	//leia(raio);
	//Processamento - calculo da area
	//area = 3.14 * raio * raio;
	//Saída - mostrar o resultado   
	//escreva("O valor da área é: " , area);
//fimPrincipal

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    double raio, area, PI;//declaracao de variaveis
    printf("Informe o valor do raio: ");//Msg da tela
    scanf("%lf", &raio);//Pegar o valor digitado
    //processamento
    PI = pow(3+0,14);//valor de PI
    area = (sqrt (PI * raio * raio));//calculo da area
    printf("O valor da area = %2lf\n", area);
    
    return 0;
}

