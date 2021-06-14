#include<stdio.h>
#include<stdlib.h> 
#include<locale.h> 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resultado, i = 1;
	
	do { 
		printf("Insira um numero para seu cálculo de fatorial: \n");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0);
	

	resultado = numero; 
	while (i < numero) {
		resultado *= i;
		i ++;
	}
	
	printf("O Fatorial de %i! e igual a : %i\n", numero, resultado); 
}
