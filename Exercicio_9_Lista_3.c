#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, Cor_olho[10], Cor_cabelo[10];
	int idade, i = 0, Mulher = 0, maiorIdade, pessoas;
	float porcentagem;

	
	printf("Quantas pessoas serão cadastradas? ");
	scanf("%d", &pessoas);
	fflush(stdin);
	
	printf("Para encerrar a pesquisa digite '-1' no campo idade.\n");
	do {
		printf("Digite o sexo da %d pessoa [M/F]: ", i);
		fflush(stdin);
        do
        {
            scanf("%c", &sexo);
            fflush(stdin);
		    sexo=toupper(sexo);
            if (sexo != 'M' && sexo != 'F')
            {
                printf("Sexo invalido por favor digite novamente [M/F]:\n");
            }
            
        } while (sexo != 'M' && sexo != 'F');
			
		printf("Cor dos olhos da %dª pessoa: [castanho], [azul], [preto], [verde]: \n", i);
	    fflush(stdin);
        do
        {
            scanf("%s", &Cor_olho);
            if (strcmp(Cor_olho, "verde") != 0 && strcmp(Cor_olho, "preto") != 0 && strcmp(Cor_olho, "azul") != 0 && strcmp(Cor_olho, "castanho") != 0)
            {
                printf("Cor inexistente, por favor digite a cor novamente:\n");
            }
            
        } while (strcmp(Cor_olho, "verde") != 0 && strcmp(Cor_olho, "preto") != 0 && strcmp(Cor_olho, "azul") != 0 && strcmp(Cor_olho, "castanho") != 0);
        
		
			
		printf("Cor do cabelo da %dª pessoa: [loiro] [castanho] [preto]: \n", i);
		fflush(stdin);
        do
        {
            scanf("%s", &Cor_cabelo);
            if (strcmp(Cor_cabelo, "loiro") != 0 && strcmp(Cor_cabelo, "preto") != 0 && strcmp(Cor_cabelo, "castanho") != 0)
            {
                printf("Cor inexistente, por favor digite a cor novamente:\n");
            }
            
        } while (strcmp(Cor_cabelo, "loiro") != 0 && strcmp(Cor_cabelo, "preto") != 0 && strcmp(Cor_cabelo, "castanho") != 0);
        
		
		printf("Informe a idade da %dª pessoa: \n", i);
		fflush(stdin);
		scanf("%d", &idade);
		
		if((idade>=18 || idade<=35) && (sexo=='F') && strcmp(Cor_olho, "verde") && strcmp(Cor_cabelo, "loiro"));
			Mulher++;
		
		if(i == 1 || maiorIdade < idade)
			maiorIdade = idade;
			
		i++;	
	} while(idade >= 0);
		
		porcentagem = (Mulher/pessoas) * 100; 
		
		
		printf("\n\nE habitantE com a maiorE idadE possuE: %d anEs.\n", maiorIdade);
		printf("\nA porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro é de: %.2f %%", porcentagem);
//ps: usei pronome neutro brincandokkkkkkkkkkkkkkkkk
printf("\n\n");
	

system("pause");	

return 0;	
}
