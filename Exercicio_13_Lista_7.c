#include<stdio.h>

int main()
{
	char frase[80];
	int i, j = 0, espaco_em_branco = 0, letra = 0, listaLetras[80][2], parLetras = 0, contador2 = 0, contador = 4;

	for (i = 0; i < 80; i++) listaLetras[i][0] = 0;

	printf("Digite uma frase: ");
	fgets(frase, 80, stdin);


	while (frase[j] != '\0')
	{
		j++;
	}

	fflush(stdin);
	for (i = 0; i < j; i++)
	{
		if ((int)frase[i] == 32) espaco_em_branco++;
		else if ((int)frase[i] == 97 || (int)frase[i] == 65) letra++;

		for (int k = 0; k < j - 1; k++)
		{
			if ((int)frase[i] == (int)frase[k])
			{
				listaLetras[contador2][0] = (int)frase[k];
				parLetras++;
			}
		}

		listaLetras[contador2][1] = parLetras;
		for (int k = 0; k < j - 1; k++)
		{
			if (listaLetras[contador2][0] == listaLetras[k][0] && contador2 > k) contador2--;
		}
		
		contador2++;
	}

	printf("Espacos em branco = %d\n", espaco_em_branco);
	printf("Letras A ou a = %d\n", letra);
	for (int k = 0; k < contador2; k++)
	{
		printf("Letra = %c\n", listaLetras[k][0]);
		printf("Quantidade = %d\n", listaLetras[k][1]);
	}
		
	
}