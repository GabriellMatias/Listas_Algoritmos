#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float notas[30];
	
	for(int i = 0; i < 30; i++){
		printf("Informe a nota do aluno[%d]: ", i + 1);
		scanf("%f", &notas[i]);
	}

	
	return 0;
}
