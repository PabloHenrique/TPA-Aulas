/*
Fun��o: Calcular o pre�o de uma presta��o utlizando a formula 
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float prest = 0, valor = 0, taxa = 0, tempo = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o valor total: \n");
	scanf ("%f", &valor);
	printf ("Insira a taxa de atraso (p/dia) da sua presta��o: \n");
	scanf ("%f", &taxa);
	printf ("Insira o tempo das presta��es \n");
	scanf ("%f", &tempo);
	prest = valor+(valor+(taxa/100)*tempo);
	printf("O valor de sua presta��o � de: %f \n", prest);
	printf ("\n");
	system("pause");
}
