#include<stdio.h>

int main(){
	int horas, valor;
	printf("Digite quantas horas de internet voce utilizou: ");
	scanf("%s", &horas);
	valor = ((horas-20) * 3) + 30;
	if (horas<=20)
	printf("O valor a ser pago sera de 30 reais");
	else if (horas>20)
	printf("O valor a ser pago sera de %s reais", valor);
	else 
	printf("Valores Invalidos");
	return 0;
	}
