#include <stdio.h>
#include <locale.h>

int main(){	
	int numero1, numero2;
	
	printf("DIGITE O PRIMEIRO NUMERO: \n");
	scanf("%d", &numero1);
	printf("DIGITE O SEGUNDO NUMERO: \n");
	scanf("%d", &numero2);
	
	for(int i = numero1; i <= numero2; i++){
		if((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0) && (i % 11 != 0) || i== 1 || i == 2 || i == 3 || i == 5 || i == 7 || i ==11){
			printf("%d E UM NUMERO PRIMO\n", i);
		}
	}	
	return 0;
}
