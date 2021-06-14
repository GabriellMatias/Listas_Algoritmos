//algoritmo divisorDividendo
// Síntese
//  Objetivo: Algoritmo que a partir da leitura de dois números forneça
//            o resto e o quociente da divisão do primeiro pelo segundo número  
//  Entrada : dois números, um dividendo e um divisor
//  Saída   : resto e quociente da divisão desses dois números


//principal
	// Declarações das variáveis
//inteiro dividendo, divisor;

    // Instruções
//escreva("Digite um dividendo e um divisor para efetuar a operação matemática:"); 
//escreva("Dividendo: ");
//leia(dividendo);
//escreva("Divisor: ");
//leia(divisor);
//escreva ("O quociente desta divisão é "+dividendo/divisor+"e o resto é"+dividendo%divisor+".");
//fimPrincipal

#include<stdio.h> 
#include<math.h>
#include<stdlib.h>

int main() { 
    double fio, metrodefio; 
    int rolo; 
    
    printf("Informe o valor total de fios necessario: "); 
    scanf("%lf", &fio); 
    
    rolo = fio / 50; //calculo do da quantidade de rolos 
    metrodefio = fio - (rolo*50); //calculo pra saber os metros de fio
    
    printf("Vao ser necessarios: %.d rolo(s) e %.2lf metros de fios", rolo, metrodefio); 

  return 0; 
}
