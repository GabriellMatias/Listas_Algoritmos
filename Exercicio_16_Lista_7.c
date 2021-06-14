#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Vetor_A[10], Vetor_B[10], Vetor_C[10][10], contador, numero, posicaoLinha, posicaoColuna, i, j;
	
	printf(" || PREENCHENDO O VETOR A ||\n");
	for(contador = 0; contador < 10; contador++){
		printf("Digite a posição %i do vetor a: ", contador);
		scanf("%i", &Vetor_A[contador]);
	}
	printf("\n\n");
	
	printf("|| PREENCHENDO O VETOR B ||\n");
	for(contador = 0; contador < 10; contador++){
		printf("Digite a posição %i do vetor b: ", contador);
		scanf("%i", &Vetor_B[contador]);
	}
	printf("\n\n");		
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			Vetor_C[i][j] = Vetor_A[i] + Vetor_B[j];
		}
	}
	
	printf("|| APRESENTANDO O VETOR C ||\n");
	for(i = 0; i < 10; i++){
		printf("[");
		for(j = 0; j<9; j++){
			printf("%.3i, ", Vetor_C[i][j]);
		}
		printf("%.3i]\n", Vetor_C[i][9]);
	}
	
	
	printf("\n\n");
	printf("Pesquise um Numero: \n");
	scanf("%i", &numero);
	
	for(i = 0; i < 10; i++){
		for(j = 0; j<10; j++){
			if(Vetor_C[i][j] == numero){
				printf("O numero digitado aparece na linha %i e na coluna %i\n", i, j);
			}
		}
	}
	
}
