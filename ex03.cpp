/*
Fun��o: �rea de um c�rculo
Autor: Pablo Henrique Vieira de Nadai
Data: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float PI = 3.1416, raio = 0, area = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o raio do seu c�rculo: \n");
	scanf ("%f", &raio);
	area = (raio * raio) * PI;
	printf ("A �rea do seu c�rculo � %f m�", area);
	printf ("\n");
	system("pause");
}
