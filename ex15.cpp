/*
Fun��o: Apartir do raio calcule o comprimento, a �rea e o volume
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float raio = 0, PI = 3.1416, c = 0, area = 0, volume = 0, dm = 0, cubo = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o raio da sua circunfer�ncia: \n");
		scanf ("%f", &raio);
	//CONTAS
	dm = raio * raio;
	cubo = raio * raio * raio;
	//...
	//CALCULO
	c = 2 * PI * raio;
	area = dm * PI;
	volume = ((3/4) * PI) * cubo;
	//..
	printf("O comprimento da sua circunfer�ncia � de: %f \nA �rea � de: %f \nE o volume: %f \n",c, area, volume);
	printf ("\n");
	system("pause");
}
