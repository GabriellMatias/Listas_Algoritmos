#include <stdio.h>

int main(){
	float percentual, porcentagem;

	porcentagem = 0;

	printf("Informe o percentual desejado: ");
	scanf("%f", &percentual);
	
	porcentagem = (percentual * 555) / 100;
	
	printf("%.0f porcento de 555 = %.2f", percentual, porcentagem);
}
