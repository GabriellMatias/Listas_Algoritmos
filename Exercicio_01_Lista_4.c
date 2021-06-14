
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main(){
	

	setlocale(LC_ALL,"Portuguese"); 

	int ano, mes, dia, resto, anoBissexto=0;
	

	printf("Bem-Vindo(a)! Esse programa irá te informar se a data inserida é válida.");
	printf("\n\nDigite o Ano: ");
	

	do{
		scanf("%d", &ano);
			if(ano<=0){
				printf("\nO Ano inválido! Digite um ano de valor positivo: ");
			}
	}while(ano<=0);
	

	resto = ano % 4;
		if(resto==0){
			anoBissexto = 1;
		}
	

		
		printf("Digite o mês: ");
		

		do{
			scanf("%d", &mes);
				if(mes>12 || mes<1){
					printf("\nMês inválido! Digite um mês entre 1 e 12: ");
				}
		}while(mes>12 || mes<1);
		

		switch(mes){
			
			//Janeiro
			case 1:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Fevereiro
			case 2:
				printf("Digite o dia: ");
				
				//Feveiro(Ano Bissexto)
				if(anoBissexto == 1){
		
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>29){
							printf("Dia inválido! Digite um dia entre 1 e 29: ");
						}
					}while(dia<1 || dia>29);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				
				}
				
				//Fevereiro(Ano Normal)
				else{
					
					do{
						scanf("%d", &dia);
						if(dia<1 || dia>28){
							printf("Dia inválido! Digite um dia entre 1 e 28: ");
						}
					}while(dia<1 || dia>28);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
					
				}
				
				break;
		
			//Março
			case 3:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Abril
			case 4:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;	
			
			//Maio
			case 5:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Junho
			case 6:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;	
			
			//Julho	
			case 7:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Agosto
			case 8:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Setembro
			case 9:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Outubro
			case 10:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
				
			//Novembro
			case 11:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>30){
						printf("Dia inválido! Digite um dia entre 1 e 30: ");
					}
				}while(dia<1 || dia>30);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;
			
			//Dezembro	
			case 12:
				printf("Digite o dia: ");
				
				do{
					scanf("%d", &dia);
					if(dia<1 || dia>31){
						printf("Dia inválido! Digite um dia entre 1 e 31: ");
					}
				}while(dia<1 || dia>31);
				
				printf("A data: %d / %d / %d é válida.", dia, mes, ano);
				break;				
				
		}
		
		printf("\nObrigado por usar esse programa! ");
		
	
	return 0;
	
}
