#include<stdio.h>
#include<stdlib.h>

int main(){

	int numero,soma=0,opcao,vezes=0;
	
	do{
	
	printf("digite um numero: ");
	scanf("%i",&numero);
	soma+=numero;
	
	printf("[1] continuar\n");
    printf("[2] Finalizar\n");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	vezes++;}
	
	while(opcao==1 && vezes!=100);
	printf("o resultado da soma e %i\n",soma);
    system("pause");

	return 0;
}
