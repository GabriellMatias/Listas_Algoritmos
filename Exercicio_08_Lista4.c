#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ano=0;
	float alturaAnacleto=1.50, alturaFelisberto=1.10;
	
	do{
		printf("\nAno %d",ano);
		printf("\n\nAnacleto: %.2f",alturaAnacleto);
		printf("\nFelisberto: %.2f\n\n", alturaFelisberto);
		alturaAnacleto = alturaAnacleto + 0.02;
		alturaFelisberto = alturaFelisberto + 0.03;
		ano++;
		system("pause");
	
	}while(alturaAnacleto > alturaFelisberto);
	
	
	printf("ANOS NECESSARIOS PARA QUE FELIZBERTO SEJA MAIOR QUE ANACLETO: %d", ano);
	
	return 0;

}
