#include<stdio.h>
#include<stdlib.h>

int main(){
		
	
	int auxiliar, auxiliar2;
	int votos_candidato1=0, votos_candidato2=0, votos_candidato3=0, votos_candidato4=0,votosBranco=0, votosNulo=0, votosTotal=0;
	int porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagemNulo, porcentagemBranco;
	
	printf("Bem-Vindo a Urna Eletronica!\n\n");

	do{
		printf("Digite o número corresponte a sua opção de voto. Contagem: %d\n\n",votosTotal);
		printf("0- Fechar votação\n");
		printf("1- Candidato 1 [JOAO]\n");
		printf("2- Candidato 2 [PEDRO]\n");
		printf("3- Candidato 3 [MARIA]\n");
		printf("4- Candidato 4 [GABRIEL]\n");
		printf("5- Voto Nulo\n");
		printf("6- Voto Branco\n");
		scanf("%d", &auxiliar);
		
	
		switch(auxiliar){
			
			case 0:
				break;
					
			case 1:
                printf("CANDIDATO 1 ESCOLHIDO [JOAO]\n");
				votos_candidato1++;
				votosTotal++;
				break;
		
			case 2:
                printf("CANDIDATO 2 ESCOLHIDO [PEDRO]\n");
				votos_candidato2++;
				votosTotal++;
				break;
			
			case 3:
                printf("CANDIDATO 3 ESCOLHIDO [MARIA]\n");
				votos_candidato3++;
				votosTotal++;
				break;
			
			case 4:
                printf("CANDIDATO 4 ESCOLHIDO [GABRIEL]\n");
				votos_candidato4++;
				votosTotal++;
				break;
			
			case 5:
                printf("VOTO NULO\n");
				votosNulo++;
				votosTotal++;
				break;
				
			case 6:
                printf("VOTO BRANCO\n");
				votosBranco++;
				votosTotal++;
				break;	
			
			default:
				printf("Valor Inválido!\n");
		}

		system("cls");
		
	}while(auxiliar!=0);
	

	porcentagem1 = (votos_candidato1* 100)/ votosTotal;
	porcentagem2 = (votos_candidato2* 100)/votosTotal;
	porcentagem3 = (votos_candidato3* 100) /votosTotal;
	porcentagem4 = (votos_candidato4* 100) /votosTotal;
	porcentagemBranco = (votosBranco* 100) / votosTotal;
	porcentagemNulo = (votosNulo*100) / votosTotal;
	
	
	printf("Total de Votos: %d\n\n", votosTotal);
	printf("Total de Votos Candidato 1: %d\n", votos_candidato1);
	printf("Total de Votos Candidato 2: %d\n", votos_candidato2);
	printf("Total de Votos Candidato 3: %d\n", votos_candidato3);
	printf("Total de Votos Candidato 4: %d\n", votos_candidato4);
	printf("Total de Votos Brancos: %d\n", votosBranco);
	printf("Total de Votos Nulos: %d\n\n", votosNulo);
	
	
	printf("Porcentagem de Votos Candidato 1: %d Porcento\n", porcentagem1);
	printf("Porcentagem de Votos Candidato 2: %d Porcento\n", porcentagem2);
	printf("Porcentagem de Votos Candidato 3: %d Porcento\n", porcentagem3);	
	printf("Porcentagem de Votos Candidato 4: %d Porcento\n", porcentagem4);
	printf("Porcentagem de Votos Candidato Brancos: %d Porcento\n", porcentagemBranco);
	printf("Porcentagem de Votos Candidato Nulos: %d Porcento\n", porcentagemNulo);
	
	
	return 0;

	
}
