#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{

char sexo;
int nascimentos=0, i, meses, falecimentos=0, quantHomens=0, quantcriancas=0, quantMeses=0;
float porcentagemHomem=0, porcentagem=0, porcentagemMeses=0;
	
	setlocale(LC_ALL, "Portuguese");


        printf("Informe o número de crianças nascidas neste período: ");
        fflush(stdin);
        scanf("%d", &nascimentos);

        printf("Informe o quantitativo que morreram: ");
        fflush(stdin);
        scanf("%d", &falecimentos);
        
        porcentagem = (falecimentos / nascimentos) * 100;
        
for(i = 0; i < falecimentos; i++)
{
        printf("Informe o sexo da criança (M/F): ");
        fflush(stdin);
        scanf("%s", &sexo);
        sexo = toupper(sexo);

        printf("Quantos meses a criança tem desde que nasceu? ");
        fflush(stdin);
        scanf("%d", &meses);
        
if (sexo == 'M')
        quantHomens++;
        porcentagemHomem = (quantHomens / falecimentos) * 100;						            
        
if (meses <= 24)
        quantcriancas++;
        porcentagemMeses = (quantcriancas / falecimentos) * 100;
}

    printf("\n\nPorcentagem de crianças mortas neste período foi de %.1f. ", porcentagem);
    printf("\nPorcentagem de crianças masculinas mortas neste período foi de %.1f. ", porcentagemHomem);
    printf("\nPorcentagem de crianças que viveram 24 meses ou menos neste período foi de %.1f. ", porcentagemMeses);		
	return 0;
}

