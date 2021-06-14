#include <stdio.h>
#include <ctype.h>

int main(){
	
	int Quantproduto;
	char Produtoextra, nomeProd[10];
	float preco;
	
	printf("Para comecar, informe a quantidade de produtos: \n");
	scanf("%d", &Quantproduto);
	fflush(stdin);
	
	for (int i = 1; i <= Quantproduto; i++){	
		if (i < Quantproduto){
	        printf("\nQual o nome do produto %d? \n",i);
		    fgets(nomeProd, 10, stdin);
			fflush(stdin);
	    
	    	printf("Qual o preco desse produto %d? \n", i);
	    	scanf("%f", &preco);
	    	fflush(stdin);
			printf("O produto [%s] passou a custar %.2f!\n", nomeProd, preco * 1.10);
	 
		   
			printf("\nDeseja informar outro produto? [S/N]: \n");
			scanf("%c", &Produtoextra);
			fflush(stdin); 
			Produtoextra = toupper(Produtoextra);
	}
        else
		    printf("Por padrao o preço do ultimo produto possui valor igual a -1\n");
		if(Produtoextra == 'N') {
			i = Quantproduto;
		}
	}

	return 0;
}

