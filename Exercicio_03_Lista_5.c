#include<stdio.h>
#include<locale.h>

int main(){
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	
	printf("+----------------------------+\n");
	printf("|   caractere:          %c   |\n", caractere);
	printf("|   decimal:            %i   |\n", caractere);
	printf("|   hexadecimal:        0x%x |\n", caractere);
    printf("+----------------------------+\n");
	
}
