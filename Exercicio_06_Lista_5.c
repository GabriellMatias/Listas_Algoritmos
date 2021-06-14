#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	

int numero;	

setlocale(LC_ALL, "Portuguese");
		
printf("+---------------------------------------------------------+\n");
printf("|     Catalogo abaixo de regiões destinadas a passeio:    |\n");
printf("+---------------------------------------------------------+\n");
printf("|       1                  ||            Norte            |\n");
printf("|       2                  ||            Nordeste         |\n");
printf("|       3                  ||            Centro-Oeste     |\n");
printf("|       4                  ||            Sudeste          |\n");
printf("|       5                  ||            Sul              |\n");
printf("|       0                  ||            Sair do programa |\n");	
printf("+---------------------------------------------------------+\n");
printf("\nQual das regiões o senhor(a) gostaria de conhecer?");
scanf("%d", &numero);	

switch(numero)
{
	case 1: 
	system("cls");
    printf("+-------------------------------------------------------------------------------+\n");
	printf("|    O destino que você escolheu foi a região Norte, tenha uma boa viagem!      |");
	printf("+-------------------------------------------------------------------------------+\n");
	break;
	
	case 2: 
	system("cls");
    printf("+-------------------------------------------------------------------------------+\n");
	printf("|    O destino que você escolheu foi a região Nordeste, tenha uma boa viagem!   |\n");
	printf("+-------------------------------------------------------------------------------+\n");
	break;
	
	case 3: 
	system("cls");
    printf("+-------------------------------------------------------------------------------+\n");
	printf("|  O destino que você escolheu foi a região Centro-Oeste, tenha uma boa viagem! |\n");
	printf("+-------------------------------------------------------------------------------+\n");
	break;
	
	case 4: 
	system("cls");
    printf("+-------------------------------------------------------------------------------+\n");
	printf("|    O destino que você escolheu foi a região Sudeste, tenha uma boa viagem!    |\n");
	printf("+-------------------------------------------------------------------------------+\n");
	break;
	
	case 5: 
	system("cls");
    printf("+-------------------------------------------------------------------------------+\n");
	printf("|    O destino que você escolheu foi a região Sul, tenha uma boa viagem!        |\n");
	printf("+-------------------------------------------------------------------------------+\n");
	break;
	
    default: printf("\nOpção invalida!!!");	
}	
	
return 0;	
}
