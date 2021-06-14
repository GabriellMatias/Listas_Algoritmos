#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	printf("\nDigite seu sexo [M/F]:\n");

	do{
		scanf("%c", &sexo);
        sexo=toupper(sexo);
			if(sexo != 'F' || sexo != 'M'){
		printf("\nDigite um sexo válido! [F/M]");
		}
		
	}while(sexo != 'F' || sexo != 'M');
    
    if (sexo == 'F')
    {
       printf("Sexo feminino\n");
    } else printf("Sexo masculino\n");
	
	return 0;
}
	
	
