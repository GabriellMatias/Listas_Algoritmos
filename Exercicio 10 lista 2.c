//Menor numero
#include<stdio.h>//biblioteca para entrada e saída
int main(){
	int n1, n2, n3;
	printf("Digite os 3 valores: ");
	scanf("%i%i%i", &n1, &n2, &n3);
	if (n1<=n2 && n1<=n3) 
	printf("O menor valor e:%i", n1);
		else if (n2<=n1 && n2<=n3)
		printf("O menor valor e:%i", n2);
			else if (n3<=n1 && n3<=n2)
			printf("O menor valor e:%i", n3);
				else
				printf("Valores Invalidos");
	return 0;
}