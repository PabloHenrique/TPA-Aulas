/*
Função: Receba 4 notas, 4 pesos e calcule a média ponderada destes valores
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float a1 = 0, a2 = 0, media = 0;
	char p1, p2;
	setlocale(LC_ALL, "");
	printf ("Indique a altura de uma das pessoas: \n");
		scanf ("%f", &a1);
	printf ("Indique a altura da outra pessoa: \n");
		scanf ("%f", &a2);
	printf ("Indique o nome da primeira pessoa: \n");
		scanf ("%s", &p1);
	printf ("Indique o nome da segunda pessoa: \n");
		scanf ("%s", &p2);
	media = (a1 + a2) /2;
	printf("A média entre %s e %s é de: %f", p1, p2, media);
	printf ("\n");
	system("pause");
}
