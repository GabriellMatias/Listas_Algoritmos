#include<stdio.h>
#include<ctype.h>
int main(){
	
	int num_imaginado, chutes, i=1;
	
	printf("Informe o numero imaginado: ");
	scanf("%d", &num_imaginado);
	fflush(stdin);
	
	system("cls");
	
	while(chutes != num_imaginado){
			
		printf("%d° chute: ", i);
		scanf("%d", &chutes);
		fflush(stdin);
		
		if(chutes<num_imaginado)
			printf("\nChute muito alto!\n\n");
			else if(chutes>num_imaginado)
				printf("\nChute muito baixo!\n\n");
					else printf("\nAcertou!\n\n");
		
		system("pause");
		system("cls");
		
		i++;		
	}
	
	printf("\nO numero imaginado foi: %d", num_imaginado);
	
	return 0;
}
