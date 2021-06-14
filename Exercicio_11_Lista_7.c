#include<stdio.h>

int main(){
	
	int quantidadeFuncionarios = 0, matricula, i, codigoFuncional[100];
	bool mesmaMatricula;
	double salario, menorSalario = 10000, maiorSalario = 0, somaSalarios = 0, salarios[100], mediaSalarial;
	
	
	for(i = 0; i<100; i++){
		mesmaMatricula = false;
		
		printf("Digite a matrícula do funcionário: ");
		scanf("%i", &matricula);		
		fflush(stdin);
		
		if(matricula == 0) break;
		
		for(int j = 0; j < quantidadeFuncionarios; j++)
			if(matricula == codigoFuncional[j]) mesmaMatricula = true;
			
		printf("Agora, digite o salário do funcionário: ");
		scanf("%d", &salario);		
		fflush(stdin);

		if(!mesmaMatricula){
			salarios[quantidadeFuncionarios] = salario;
			codigoFuncional[quantidadeFuncionarios] = matricula;
			quantidadeFuncionarios++;
			if(salario > maiorSalario) maiorSalario = salario;
			if(salario < menorSalario) menorSalario = salario;
			somaSalarios = somaSalarios + salario;
		} else printf("MATRICULA JA CADASTRADA!!\n\n");
	}
	
	mediaSalarial = somaSalarios / quantidadeFuncionarios;
	
	printf("O maior salário é %d\n", maiorSalario);
	printf("E o menor salário é %d\n", menorSalario);
	printf("A media salarial da empresa é igual a %d", mediaSalarial);
}
