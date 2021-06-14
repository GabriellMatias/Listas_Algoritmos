#include <stdio.h>

int main()
{
	int i = 0, j, contador, contador2, maisVelho = 0, posicao[100], idades[100];

	for (int pos = 0; pos < 100; pos++) posicao[pos] = 0;
	int sair = 0;
	do {
		printf("DIGITE UMA IDADE OU UM VALOR NEGATIVO PARA PARAR: ");
		scanf("%d", &idades[i]);

		sair = i >= 100 || idades[i] < 0;
		i++;

	} while (!sair);

	for (j = 0; j < i; j++)
	{
		for (contador = 0; contador < i - 1; contador++)
		{
			if (idades[contador] <= idades[contador + 1])
			{
				maisVelho = idades[contador + 1];		
			}
		}
	}
	printf("MAIS VELHO %d\n", maisVelho);

	for (contador2 = 0; contador2 < i; contador2++)
	{
		if(idades[contador2] == maisVelho) printf("POSICAO %d\n", contador2);
	}
}