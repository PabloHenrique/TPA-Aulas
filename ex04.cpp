/*
Função: Calcular o produto de 3 números
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int v1 = 0, v2 = 0, v3 = 0, soma = 0, quad = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o primeiro valor:\n");
	scanf ("%i", &v1);
	printf ("Insira o segundo valor:\n");
	scanf ("%i", &v2);
	printf ("Insira o terceiro valor:\n");
	scanf ("%i", &v3);
	soma = v1 + v2 + v3;
	quad = soma * soma;
	printf ("A soma dos três números é %i", soma);
	printf ("\n");
	printf ("O quadrado da soma dos três números é %i", quad);
	printf ("\n");
	system("pause");
}
