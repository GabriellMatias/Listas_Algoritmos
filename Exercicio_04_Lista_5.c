#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <locale.h> 
#include<ctype.h>

int main () {

int loja, cd, mesa_computador, cadeira, estante, mesa_impressora, livros,  contador; 
float total;

setlocale(LC_ALL, "Portuguese");

	do {
	    printf("+-------------------------------------------------+\n");
        printf("|                 BEM VINDO                       |\n");
        printf("+-------------------------------------------------+\n");
        printf("\n");
        printf("+-------------------------------------------------+\n");
        printf("|                       MENU                      |\n");
        printf("+-------------------------------------------------+\n");
        printf("|             OPCAO               ||    CODIGO   |\n");
        printf("+-------------------------------------------------+\n");
        printf("| ESCOLHER CADEIRA                ||      1      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| MESA PARA COMPUTADOR            ||      2      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| ESTANTE DE LIVROS               ||      3      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| MESA DA IMPRESSORA              ||      4      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| ESTANTE DE CDS                  ||      5      |\n");
        printf("+-------------------------------------------------+\n");
        printf("| SAIR DO PROGRAMA                ||      6      |\n");
        printf("+-------------------------------------------------+\n");
        printf (" Qual a sua escolha o seu produto:");
        scanf ("%d", &loja);
	
	 switch(loja){
        case 1: 
        printf ("\n Quantas pessoas escolherem o 1ª produto");
        scanf ("%d", &cadeira);
        cadeira += contador;
        break;
        
		case 2: 
		printf ("\n Quantas pessoas escolherem o 2ª produto");
        scanf ("%d", &mesa_computador);
        mesa_computador += contador;
        break; 
        
       case 3: 
		printf ("\n Quantas pessoas escolherem no 3ª produto");
        scanf ("%d", &livros);
        livros += contador;
        break;  
        
        case 4: 
		printf ("\n Quantas pessoas escolheram o 4ª produto");
        scanf ("%d", &mesa_impressora);
        mesa_impressora += contador;
        break; 
        
        case 5: 
		printf ("\n Quantas pessoas escolheram o 5ª produto");
        scanf ("%d", &cd);
        cd += contador;
        break; 
        
        
		case 0: 
		printf ("\n Quantas pessoas escolheram o 1ª produto %d", cadeira);
		printf ("\n Quantas pessoas escolheram o 2ª produto %d", mesa_computador);
    	printf ("\n Quantas pessoas escolheram o 3ª produto %d", livros);
    	printf ("\n Quantas pessoas escolheram o 4ª produto %d", mesa_impressora);
		printf ("\n Quantas pessoas escolheram o 5ª produto %d", cd);
    	total = cadeira + mesa_computador + livros + mesa_impressora + cd;
    	printf ("\n O total de pessoas que votaram foi: %f", total);
        break; 
		
		default:
		printf(" OPCAO INVALIDA!\n");
        }
    } while (loja !=0);
		
	
return (0);
}



