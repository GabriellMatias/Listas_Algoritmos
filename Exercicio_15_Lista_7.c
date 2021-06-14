#include<stdio.h> 

int main(void)
{
	int caracteres[30], character2, Character_Encontrado = 0, sair = 0, i = 0, contador;
	
	do {
		fflush(stdin);
		printf("Digite o caractere: ");
		caracteres[i] = getchar();
		sair = caracteres[i] >= 123 || caracteres[i] < 97;
		i++;

	} while (!sair);

	i--;

	fflush(stdin);
	printf("Digite o caractere que deseja encontrar: ");
	character2 = getchar();


	for (contador = 0; contador < i; contador++)
	{
		if (caracteres[contador] == character2)
		{
			printf("Caractere encontrado!");
			Character_Encontrado = 1;
		}
	}

	if (Character_Encontrado == 0) printf("Caractere nao encontrado!");
	return 0;
}
