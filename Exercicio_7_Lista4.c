#include <stdio.h>
#include <ctype.h>

int main(){
	
	int altura, menor_altura = 0, maior_altura = 0, alturaFem = 0, feminino = 0, mediaFem;
	char sexo;
    
	menor_altura = altura;
	
	
	for(int i = 1; i <= 50; i++){
		printf("INFORME O SEXO DA %i PESSOA [M/F]",i);
        do
        {
            scanf("%c", &sexo);
		    fflush(stdin);
		    sexo = toupper(sexo);
            if (sexo != 'M' || sexo != 'F')
            {
                printf("SEXO INVALIDO POR FAVOR DIGITE O SEXO NOVAMENTE: \n");
            }
            
        } while (sexo != 'M' || sexo != 'F');
        
		printf("INFORME A ALTURA DA PESSOA [CM]: \n");
		scanf("%d", &altura);
		fflush(stdin);
	
		if(maior_altura < altura){
			maior_altura = altura;
		}		
		if(sexo == 'F'){
			feminino++;
			alturaFem = alturaFem + altura;
		}
  		if(menor_altura > altura){
			menor_altura = altura;		
		}
    }
		mediaFem = alturaFem / feminino;
		
		printf("A MAIOR ALTURA DO GRUPO E DE: %d\n", maior_altura);
		printf("A MENOR ALTURA DO GRUPO E DE: %d\n", menor_altura);
		printf("A MEDIA TOTAL DAS ALTURAS DAS MULHERES E: %d\n", mediaFem);
	
	return 0;
}