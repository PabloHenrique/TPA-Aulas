/*
Função: Área de um retângulo
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area = 0, b = 0, a = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu retângulo: \n");
	scanf ("%i", &b);
	printf ("Insira a altura do seu retângulo: \n");
	scanf ("%i", &a);
	area = b * a;
	printf ("A área do seu retângulo é %i m² \n", area, "m2");
	printf ("\n");
	system("pause");
}
