#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int Quantnumeros = 0; 
	int numero;

	for(int i = 0; i < 100; i++){ 
		printf("Digite um número: "); 
		scanf("%i", &numero);
		Quantnumeros++;
		if(numero < 0){ 
			break;
		}
	}
	
	if(Quantnumeros == 1){
		printf("Foi recebido apenas 1 número.\n\n");
	} else{ 
		printf("Foram recebidos [%i] numeros\n\n", Quantnumeros);
	}
	
	system("pause");	
	return 0;
}


