#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0,j = 0, Size_nome;
	char nome[100];
	

	do{
    i++;
	printf("DIGITE A %d LETRA DO SEU NOME: ",i);
	fflush(stdin);
	scanf("%c",&nome[100]);
	Size_nome = Size_nome + 1;
	}while('#' != nome[100]);

    Size_nome = Size_nome-2;
 
    for(i = 0;i < Size_nome;i++){
    	printf("%c",nome[i]);
	}
	return 0;
}
