#include <stdio.h>



int main(){
	
	
	int i,opcaoMenu;
	double preco[100],porcentagem = 0;
	
	
	for(i = 0;i < 100;i++){
		printf("DIGITE O PRECO DO %d CD: ",i+1);
		scanf("%lf",&preco[i]);
	}
	printf("+-----------------------------------------------------------------------------+\n");
    printf("|                                  MENU                                       |\n");
    printf("+-----------------------------------------------------------------------------+\n");
	printf("|    1                         AUMENTAR EM 10% O VALOR DE TODOS OS PRODUTOS   |\n");
	printf("|    2    AUMENTAR O VALOR DE TODOS OS PRODUTOS DE ACORDO COM O PRECO DESEJADO|\n");
    printf("+-----------------------------------------------------------------------------+\n");
    scanf("%d",&opcaoMenu);
    
	switch(opcaoMenu)
	{
	    case 1 : 
		
		for(i = 0;i < 100;i++){
		preco[i] = preco[i] * 1.1;
		
		printf("PRECO DO PRODUTO COM DEZ PORCENTO DE AUMENTO: %.2lf\n",preco[i]);
	    }
		
		;break;
	    
		case 2 : 
		
		printf("ATRIBUIR AUMENTO DE:");
		scanf("%lf",&porcentagem);
		
		for(i = 0;i < 100;i++){
		preco[i] = (porcentagem+100 / 100) * preco[i];
		
		printf("PRECO DO PRODUTO COM DEZ PORCENTO DE AUMENTO: %lf\n",preco[i]);
	    }
		
		break;
	}
	
	
	
	return 0;
}
