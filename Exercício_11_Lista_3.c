#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char Finalista[2][25];
	int nota[2], soma[2];
	
	for(int i = 0; i < 3; i++){
		printf("\nNome do [%i] finalista: ", i);
		scanf("%s", &Finalista[i]);
		
		printf("Nota do primeiro Juiz: \n");
		scanf("%d", &nota[0]);
		
		printf("Nota do segundo Juiz: \n");
		scanf("%d", &nota[1]);
		
		printf("Nota do terceiro Juiz: \n");
		scanf("%d", &nota[2]);
		
		soma[i] = (nota[0] + nota[1] + nota[2]);
		
		printf("A soma das notas : %d\n", soma[i]);		
	}
	
	if(soma[0] > soma[1] && soma[0] > soma[2]){
		printf("\nO Vencedor  %s com a nota %d",Finalista[0], soma[0]);
	}else if(soma[1] > soma[0] && soma[1] > soma[2]){
		printf("\nO Vencedor  %s com a nota %d",Finalista[1], soma[1]);
	}else{
		printf("\nO Vencedor  %s com a nota %d",Finalista[2], soma[2]);
	}
	return 0;
	
}
