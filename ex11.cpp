/*
Função: Converter Celsius para Fahrenheit
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float f = 0, c = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o valor em Celsius: \n");
		scanf ("%f", &c);
	f = (c * 1.8) + 32.00;
	printf("O valor em Fahrenheit é: %f \n", f);
	printf ("\n");
	system("pause");
}
