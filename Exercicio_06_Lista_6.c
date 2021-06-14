#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanho;
	char opcao, numeroDigitado[100];
	
	do{
		do{
			printf("Digite um número inteiro positivo:");
			scanf("%s", &numeroDigitado);
			fflush(stdin);
	
			if(numeroDigitado<=0)
				printf("Numero digitado invalido, aceitamos apenas números inteiros positivos!\n");
				
			system("cls");	

		}while(numeroDigitado<=0);
	
		tamanho = strlen(numeroDigitado);
	
		printf("O número escolhido foi %s.\n", numeroDigitado);
		printf("\nPossue %d algarismos.\n", tamanho);
	
		printf("\nDeseja descobrir a quantidade de algarismos de mais algum número [S/N]:");
		scanf("%c", &opcao);
		fflush(stdin);
		
		opcao = toupper(opcao);
		
		system("cls");
	
	}while(opcao != 'N');
	
	printf("Obrigado por utilizar este programa.\n");
    
	system("pause");
    return 0;	
}
