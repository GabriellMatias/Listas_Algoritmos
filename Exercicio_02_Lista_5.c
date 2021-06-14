#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int valorNumerico, maiorNumero= 0, Num[3];
	
	for(int i = 0; i<3; i++){
		printf("Digite um valor numerico inteiro: ");
		scanf("%i", &Num[i]);
	}
	
	for(int i = 0; i<3; i++)
		if(Num[i] > maiorNumero) maiorNumero = Num[i];
	
	
	printf("O maior número digitado é %i", maiorNumero);
	
}
