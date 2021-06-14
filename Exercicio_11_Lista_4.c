#include<stdlib.h>
#include<stdio.h> 

int main(){

	float numPares=0, media, contadorPares=0;
	int num;
	

	do{
		printf("Informe um número: ");
		scanf("%d", &num);
		fflush(stdin);
		if(num == 0){
			break;
		}
			else if(num % 2 == 0){
				contadorPares++;
				numPares += num;
		}
	}while(num!=0);
	
	media = numPares / contadorPares;
	
	printf("A media dos numeros pares fornecidos e: %.2f", media);
	
	return 0;
}
