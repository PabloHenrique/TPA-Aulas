/*
Fun��o: �rea de um ret�ngulo
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area = 0, b = 0, a = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu ret�ngulo: \n");
	scanf ("%i", &b);
	printf ("Insira a altura do seu ret�ngulo: \n");
	scanf ("%i", &a);
	area = b * a;
	printf ("A �rea do seu ret�ngulo � %i m� \n", area, "m2");
	printf ("\n");
	system("pause");
}
