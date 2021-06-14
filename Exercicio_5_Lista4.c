#include<stdio.h>

int main(){

	printf("Possibilidades sobre os dados:\n");

	int resultado,primeiroDado,SegundoDado;

	for(primeiroDado=1;primeiroDado<=6;primeiroDado++){
		for(SegundoDado=1;SegundoDado<=6;SegundoDado++){
		    if(primeiroDado+SegundoDado==7){
			        resultado = primeiroDado+SegundoDado;
			    printf(" %d + %d = %d\n",primeiroDado,SegundoDado,resultado);
			}
		}
	}
	return 0;
}