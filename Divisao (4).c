	//algoritmo divisao;
	
	//principal
	
	//inteiro num1;
	//inteiro num2;
	//inteiro quoc;
	//inteiro resto;
	
	//escreval("Digite o dividendo: ");
	//leia(num1);
	
	//escreval("Digite o divisor: ");
	//leia(num2);
	
	//quoc = num1 \ num2 ;
	//resto = num1 mod num2 ;

	//escreval(" ");
	//escreval(" ");
	//escreval("Dividendo: " + num1);
	//escreval("Divisor: " + num2);
	//escreval("Quociente = " + quoc);
	//escreval("Resto = " + resto);

	#include<stdio.h>
int main(){

	int a, b ,resto , quociente;
	printf("Sabendo que 'A' vai ser dividido por 'B'\n");
    printf("Escreva o valor de A :");
    scanf("%d", &a);
    printf("Escreva o valor de B :");
    scanf("%d", &b);
    
    resto = a % b;
    quociente = a / b;
    
    printf("\nQuociente:%d\nResto:%d", quociente, resto);

    
    return 0;
}