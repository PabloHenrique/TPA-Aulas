/*
Fun��o: �rea de um tri�ngulo
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float area = 0, b = 0, a = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu tri�ngulo: \n");
	scanf ("%f", &b);
	printf ("Insira a altura do seu tri�ngulo: \n");
	scanf ("%f", &a);
	area = (b * a)/2;
	printf ("A �rea do seu tri�ngulo � %f m�", area);
	printf ("\n");
	system("pause");
}
