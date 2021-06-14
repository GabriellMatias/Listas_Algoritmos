#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	
	float altura, Media_Altura_Mulheres, maiorAltura = 0, menorAltura = 9999,Total_Altura_Mulheres;
	int quantHomens,quantMulheres;
	char sexo;
	
	for(int i = 1; i <= 10; i++){
		while(true){
			printf("Qual o sexo da pessoa %d[M/F]? ", i);
			scanf("%c", &sexo);
            sexo=toupper(sexo);
			if(sexo != 'M' || sexo != 'F'){
				printf("Sexo invalido.\n");
			} else{
                break;
                }
		}
		while(true){
			printf("Qual a altura da pessoa %d? ", i);
			scanf("%f", &altura);
			if(altura < 0.1){
				printf("Altura invalida.\n");
			} else{break;}
		}
		if(altura > maiorAltura)
			maiorAltura = altura;
            else if(altura < menorAltura)
                menorAltura = altura;
		if(sexo == 'M')
			quantHomens++;
            else if(sexo == 'F'){
                quantMulheres++;
                Total_Altura_Mulheres += altura;
            }
		
		system("cls");
	}
	
	Media_Altura_Mulheres = Total_Altura_Mulheres/quantMulheres;
	
	printf("Maior Altura: %.2f\n", maiorAltura);
	printf("Menor Altura: %.2f\n", menorAltura);
	printf("Media da altura das mulheres: %.2f\n", Media_Altura_Mulheres);
	printf("Quantidade de homens: %d", quantHomens);
	
	
	return 0;
}
