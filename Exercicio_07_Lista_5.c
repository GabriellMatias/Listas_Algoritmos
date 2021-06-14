#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num[3], buffer;
	bool ordem_Certa = false;
	
	for (int i = 0; i < 3; i ++) {
		printf("Insira o número %i: ", i+1);
		scanf("%i", &num[i]);
		system("cls");
	}
	
	while (ordem_Certa == false) {
		for (int i = 0; i < 2; i ++) {
			if (num[i] > num[i+1]) {
				buffer = num[i];
				num[i] = num[i+1];
				num[i+1] = buffer;
			}
		}
		if (num[0] < num[1] && num[1] < num[2]) {
			ordem_Certa = true;
		}
	}
	
	printf("A ordem crescente é: %i, %i, %i", num[0], num[1], num[2]);
}

