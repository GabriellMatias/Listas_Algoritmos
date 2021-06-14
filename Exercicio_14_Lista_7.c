#include <stdio.h>

int main(){
	
	int i, contador = 0, j, quantNotas, notas[80], notasRepetidas[80], freqNotas[80];
	
	printf("Informe a quantidade de notas: \n");
	scanf("%d", &quantNotas);
	
	for(i = 0; i < quantNotas; i++){
		do{
			printf("Informe a nota : \n");
			scanf("%d", &notas[i]);
		}while(notas[i] < 0 || notas[i] > 10);	
	}
	for(i = 0; i < quantNotas; i++){
		for(j = 0; j < quantNotas; j++){
			if(notas[i] == notas[j]){
				notasRepetidas[contador] = notas[i];
				contador++;
				for (int i = 0; i < contador; i++)
				{
					if (notasRepetidas[i] == notasRepetidas[i + 1]) 
						contador--; 
				}
			}		
		}
	}
	for(i = 0; i < contador; i++){
		freqNotas[i] = 0;
		for(j = 0; j < quantNotas;j++){
			if(notasRepetidas[i] == notas[j]){
				freqNotas[i] += 1;
			}
		}
	}
	printf("\n");
	for(i = 0; i < contador; i++){
		printf("O NUMERO %d APARECEU %d VEZ/VEZES!\n", notasRepetidas[i], freqNotas[i]);
	}
}
