#include<stdio.h> 

int main(void)
{
	int caracteres[30], sair = 0, i = 0, j, contador;
	
	do {
		fflush(stdin);
		printf("Digite o caractere: ");
		caracteres[i] = getchar(); 
		sair = caracteres[i] >= 123 || caracteres[i] < 97;
		i++;

	} while (!sair);

	i--;

	for (j = 0; j < i; j++)
	{
		for (contador = 0; contador < i - 1; contador++)
		{
			if (caracteres[contador] > caracteres[contador + 1])
			{
				int temp = caracteres[contador + 1];
				caracteres[contador + 1] = caracteres[contador];
				caracteres[contador] = temp;
			}
		}
	}

	for (j = 0; j < i; j++)
	{
		printf("%c", caracteres[j]);
		if (j < i - 1) printf(" < ");
	}
	return 0;
}
