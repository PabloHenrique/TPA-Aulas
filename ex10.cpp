/*
Função: Calcular o peso ideal de uma pessoa
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int peso = 0, alt = 0, imc = 0;
	setlocale(LC_ALL, "");
	printf ("Insira seu peso: \n");
		scanf ("%i", &peso);
	printf ("Insira sua altura: \n");
		scanf ("%i", &alt);
	imc = peso / (alt * alt);
	printf("O seu peso ideal é: %i \n", imc);
	printf ("\n");
	system("pause");
}
