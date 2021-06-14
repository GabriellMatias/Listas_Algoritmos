//algoritmo horas;
// Síntese
//  Objetivo:  Correspondente de horas em minutos e segundos destas horas
//  Entrada : horas
//  Saída   : correspondente em minutos e segundos
//principal
	// Declarações
	//inteiro horas, minutos, segundos;
	// Instruções
	// Entrada
	//escreva("Informe um número inteiro de horas: ");
	//leia(horas);
	// Processamento
	//minutos = horas * 60;
	//segundos = minutos * 60;
	// Saída
	//escreval("Em minutos, isso equivale a: " , minutos);
	//escreval("Em segundos, isso equivale a: ", segundos);

//fimPrincipal

#include<stdio.h> //Inclusao de biblioteca para entrada e saida de dados

int main() { //Inicio do algoritmo: funcao main

    int hora, minuto, segundo; //Declara��o de vari�veis e o tipo
    
    printf("Informe hora: "); //Imprime mensagem demandando variavel hora
    scanf("%d", &hora); //pega o valor digitado
    
    minuto = hora*60; //variavel minutos
    segundo = hora*3600; // variavel segundos
    
    printf("Hora: %d minutos e %d segundos", minuto, segundo);	//Imprime mensagem informando hora em minutos e segundos

  return 0; 
}
