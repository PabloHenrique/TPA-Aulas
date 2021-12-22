/*
Função: Calcular a média entre 4 notas
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float  n1 = 0, n2 = 0, n3 = 0, n4 = 0, s = 0, m = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a sua primeira nota: \n");
		scanf ("%f", &n1);
	printf ("Insira a sua segunda nota: \n");
		scanf ("%f", &n2);
	printf ("Insira a sua terceira nota: \n");
		scanf ("%f", &n3);
	printf ("Insira a sua quarta nota: \n");
		scanf ("%f", &n4);
	s = n1 + n2 + n3 + n4;
	m = s / 4;
	printf("A média de suas notas é de %f \n", m);
	printf ("\n");
	system("pause");
}
