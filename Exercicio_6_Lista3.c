#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float nota_aluna=0, nota_aluno=0, media_aluno=0, media_aluna=0;
    int Quant_Alunos=0, aluno, aluna;

	printf("Digite a quantidade de alunos presentes na turma: \n");
    scanf("%d", &Quant_Alunos);
    printf("Digite a quantidade de alunos do sexo MASCULINO presentes na turma: \n");
    do
    {
        scanf("%d", &aluno);
        if (aluno > Quant_Alunos)
        {
            printf("Quantidade acima do informado, por favor digite novamente:\n");
        }
        
    } while (aluno > Quant_Alunos);
    
    aluna = Quant_Alunos - aluno;
    printf("Quantidade de meninas na turma: %d\n", aluna);
    printf("Quantidade de meninos na turma: %d\n", aluno);

    printf("\n\n");

    printf("Digite a nota dos %d alunos do sexo masculino da sala\n", aluno);
    for (int i = 0; i < aluno; i++)
    {
        printf("Digite a nota do aluno numero %d: \n", i);
        scanf("%f", &nota_aluno);
        media_aluno += nota_aluno;
    }
    printf("Digite a nota dos %d alunos do sexo feminino da sala\n", aluna);
    for (int i = 0; i < aluna; i++)
    {
        printf("Digite a nota da aluna numero %d: \n", i);
        scanf("%f", &nota_aluna);
        media_aluna +=nota_aluna;
    }

    media_aluno = media_aluno/aluno;
    media_aluna = media_aluna/aluna;
	
	printf("\nMédia dos alunos: %.2f", media_aluno);
	printf("\nMédia das alunas: %.2f", media_aluna);
	
	return 0;
}