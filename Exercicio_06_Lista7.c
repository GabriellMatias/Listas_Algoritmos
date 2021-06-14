#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
	
int IdFuncionario, matricula[100], maiorSalario=0, MenorSalario=0, salario[100];	

    setlocale(LC_ALL, "Portuguese");	
 
	            printf("Informe o número de funcionários que pertencem a esta empresa: ");
	            fflush(stdin);
	            scanf("%i", &IdFuncionario);
	
	            for(int i = 0; i < IdFuncionario; i++)
	                {
		                
			                printf("Informe a matrícula do %iº funcionario: ", i+1, matricula[100]);
			                fflush(stdin);
			                scanf("%i", &matricula[i]);

		
		                    printf("Informe o salário do %iº funcionario: ", i+1, salario[100]);
		                    fflush(stdin);
		                    scanf("%i", &salario[i]);
		                  
		            if (i == 1)
			                MenorSalario = salario[i];
			                
			        else if (MenorSalario > salario[i])
				            MenorSalario = salario[i];
				            
		            if(maiorSalario < salario[i])
			                maiorSalario = salario[i];	
				}
	
	system("cls");
	
	for(int i = 1; i <= IdFuncionario; i++){
		printf("Salario do %iº é %i. \n", matricula[i], salario[i]);
	}
	
	    printf("O menor salário na comparação é: R$ %i,00. \n", MenorSalario);
	    printf("O menor salário na comparação é: R$ %i,00. \n", maiorSalario);

        system("pause");	    
	

return 0;
	
}
