#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int opcao,numero[80],vezes=0,comparador,salvo=0;

	for(int i=0;i<80;i++){

	printf("número a ser cadastrado: \n");
	scanf("%i", &numero[i]);

	salvo++;

	printf("digite [1] se deseja finalizar: \n");
	scanf("%i",&opcao);

	if(opcao==1)i=80;}

	printf("digite o numero que deseja comparar: \n");
	scanf("%i",&comparador);

	system("cls");

	for(int i=0;i<salvo;i++){
		if(comparador==numero[i]){
            vezes++;
		printf("posições onde são encontrados valores iguais: %i\n",i);
		}
	}

	printf("vezes repetidas: %i\n",vezes);

	system("pause");
	return 0;
}