//algoritmo mediaAritmetica;
// Síntese
//  Objetivo:  média aritmética de 3 números quaisquer 
//  Entrada : numeros 
//  Saída   : media
//principal
	// Declarações
	//real num1, num2, num3, media;
	// Instruções
	//Entrada
	//escreva("Informe o primeiro número: ");
	//leia(num1);
	//escreva("Informe o segundo número: ");
	//leia(num2);
	//escreva("Informe o terceiro número: ");
	//leia(num3);
	//Processamento
	//media = (num1 + num2 + num3)/3;
	//Saida
	//escreva("A média é: " , media);

//fimPrincipal

#include<stdio.h>
#include<stdlib.h>

//declaracao de variaveis 

int main(void)
{
	float num1, num2, num3, media;
	printf("Digite o primeiro Numero:");
	scanf("%f", &num1);
	printf("Digite o segundo Numero:");
	scanf("%f", &num2);
	printf("Digite o terceiro Numero:");
	scanf("%f", &num3);

	media = (num1 + num2 + num3) / 3;
	
	printf("media = %.1lf\n", media);


	return 0;
}

