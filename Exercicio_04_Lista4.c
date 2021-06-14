#include <stdio.h>

int main(){
	
	int numero1, numero2, n = 20, soma;
	printf("A serie Fibonacci e uma sucessao de numeros, iniciada em 0,1 e os numeros seguintes sao sempre\n");
 	printf("a soma dos dois numeros anteriores.\n");

    numero1 = 0;
    numero2 = 1;

	for(int i = 2; i <= n; i++){
		soma = numero1 + numero2;
		numero1 = numero2;
		numero2 = soma;
		printf("%d\n",soma);
	}
}