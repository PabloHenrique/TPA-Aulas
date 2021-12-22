/*
Função: Área de um triângulo
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float area = 0, b = 0, a = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu triângulo: \n");
	scanf ("%f", &b);
	printf ("Insira a altura do seu triângulo: \n");
	scanf ("%f", &a);
	area = (b * a)/2;
	printf ("A área do seu triângulo é %f m²", area);
	printf ("\n");
	system("pause");
}
