//algoritmo pesoNota;
// Síntese
//  Objetivo:  calcular a média do aluno
//  Entrada : notas
//  Saída   : media


//principal
	// Declarações
	//real A, B, media;
	// Instruções
	//entrada
	//escreva("Informe a nota A: ");
	//leia(A);
	//escreva ("Informe a nota B: ");
	//leia(B);
	//processamento
	//Caso (A ou B < 0 or A ou B > 10)
	//Escreva ("Impossivel de calcular")
	//Else(senao)
	//media = (A * 3.5 + B * 7.5)/11;
	//saida
	//escreval("O valor da média é: ", media);

//fimPrincipal
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{//declaracao de variaveis
	double a, b, PesoA, PesoB, media;
	//Intrucao
	printf("Informe a nota A: ");//entrada (mostra na tela)
	scanf("%lf", &a);//pega o valor digitado
	printf("Infome a nota B: ");//entrada (mostra na tela)
	scanf("%lf", &b);//pega o valor digitado
	//processamento
	PesoA = sqrt(3+0.5);//definicao do valor A
	PesoB = sqrt(7+0.5);//definicao do valor B

	if (a, b > 10, a, b < 0 )//condicao para a nota nao ser nem maior que 10 ou menor que 0
	printf("Notas inseridas incorretamente, revise!\n");
	else;
	{
	media = ((a * PesoA)+(b * PesoB)) / (PesoA+PesoB);//calculo das medias
	printf("\n Media Ponderada = %lf", media);
	}
	

	return 0;
}
