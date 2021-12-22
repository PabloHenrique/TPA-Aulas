/*
Função: Receba 4 notas, 4 pesos e calcule a média ponderada destes valores
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float base = 0, altura = 0, metro2 = 0, watts = 0;
	setlocale(LC_ALL, "");
	printf ("Indique a altura: \n");
		scanf ("%f", &altura);
	printf ("Indique a base: \n");
		scanf ("%f", &base);
	metro2 = altura * base;
	watts = metro2 * 18;
	printf("A área em metros quadrados é: %f m² \n",metro2);
	printf ("E a potencia de iluminação por watts que deverá ser utilizada é  ",watts);
	printf ("\n");
	system("pause");
}
