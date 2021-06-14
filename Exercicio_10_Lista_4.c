#include<stdlib.h>
#include<stdio.h> 
#include<ctype.h>

int main(){
	
	float Tinto=0,Rose=0,branco=0;
	float porcentagemTinto, porcentagemRose, porcentagemBranco;
	char tipo;
	
	
	do{
	printf("Digite o tipo de vinho. T para tinto, R para rose, B para branco e F para sair da aplicação: ");
	scanf("%s",&tipo);
    tipo=toupper(tipo);
	fflush(stdin);
	if(tipo == 'T')
		Tinto++;
		else if(tipo == 'R')
			Rose++;
			else if(tipo == 'B')	
				branco++;
				else if(tipo != 'F')
					printf("Digite uma valor válido!");
	}while(tipo != 'F');
	
	system("cls");
	porcentagemTinto = (Tinto / (Tinto + Rose + branco)) * 100;
	porcentagemRose = (Rose / (Tinto + Rose + branco)) * 100;
	porcentagemBranco = (branco / (Tinto + Rose + branco)) * 100;

	printf("A porcentagem de vinho tinto equivale a: %.2f [porcento].   \n", porcentagemTinto);
	printf("\nA porcentagem de vinho rose equivale a: %.2f [porcento].  \n", porcentagemRose);
	printf("\nA porcentagem de vinho branco equivale a: %.2f [porcento].\n", porcentagemBranco);

	return 0;
}
