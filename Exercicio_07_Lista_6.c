#include<stdio.h>
#include<ctype.h>

int main()
{
	char maisVoto;
	int candidato, pele = 0, maradona = 0, brancos = 0, nulos = 0;
	do {
		fflush(stdin);
		printf("Digite o seu voto: \n");
		printf("25 - Pele:\n33 - Maradona:\n ");
		scanf("%d", &candidato);

		switch (candidato)
		{
		case 25:
            printf("Candidato escolhido = Pele!\n");
			pele++;
			break;
		case 33:
            printf("Candidato escolhido = Maradona!\n");
			maradona++;
			break;
		case 0:
            printf("Voto em Branco!\n");
			brancos++;
			break;
		default:
			nulos++;
			break;
		}

		printf("Deseja adicionar mais algum voto? (S/N) \n");
		scanf(" %c", &maisVoto);
        maisVoto=toupper(maisVoto);

	} while (maisVoto == 'S');


	printf("Quantidade de votos Pele: %d\n", pele);
	printf("Quantidade de votos Maradona: %d\n", maradona);
	printf("Quantidade de votos Brancos: %d\n", brancos);
	printf("Quantidade de votos Nulos: %d\n", nulos);

	if (pele > maradona) printf("O vencedor foi o Pele\n");
	    else if (pele < maradona) printf("O vencedor foi o Maradona\n");
	        else  printf("Empatados\n");
}