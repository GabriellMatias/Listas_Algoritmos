#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
int notas[51], totalAluno=0;

    setlocale(LC_ALL, "Portuguese");
    
            printf("Informe a quantidade de alunos: \n");
            fflush(stdin);
            scanf("%d", &totalAluno);
    
            for (int i = 0; i < totalAluno; i++)
                {	
                    printf("Informe a nota do %dº aluno: ", i, notas[51]); 	
                	fflush(stdin);
                	scanf("%d", &notas[i]);	
				} 
				
			for (int i = 0; i < totalAluno; i++)
			        printf("\n\nA nota do %dº foi %d. ", i, notas[i]);	
        system("pause");	    

return 0;
	
}    
