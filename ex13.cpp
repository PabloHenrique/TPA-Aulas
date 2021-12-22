/*
Função: Receba 4 notas, 4 pesos e calcule a média ponderada destes valores
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float n1 = 0, n2 = 0, n3 = 0, n4 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, media = 0, somaP = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a primeira nota \n");
		scanf ("%f", &n1);
	printf ("Insira a segunda nota \n");
		scanf ("%f", &n2);
	printf ("Insira a terceira nota \n");
		scanf ("%f", &n3);
	printf ("Insira a quarta nota \n");
		scanf ("%f", &n4);
	printf ("Insira o primeiro peso \n");
		scanf ("%f", &p1);
	printf ("Insira o segundo peso \n");
		scanf ("%f", &p2);
	printf ("Insira o terceiro peso \n");
		scanf ("%f", &p3);
	printf ("Insira o quarto peso \n");
		scanf ("%f", &p4);
	somaP = p1 + p2 + p3 + p4;
	media = ((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4)) / somaP;
	printf("A média destes valores é: %f \n", media);
	printf ("\n");
	system("pause");
}
