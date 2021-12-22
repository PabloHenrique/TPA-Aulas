/*
Função: Apartir do raio calcule o comprimento, a área e o volume
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float raio = 0, PI = 3.1416, c = 0, area = 0, volume = 0, dm = 0, cubo = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o raio da sua circunferência: \n");
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
	printf("O comprimento da sua circunferência é de: %f \nA área é de: %f \nE o volume: %f \n",c, area, volume);
	printf ("\n");
	system("pause");
}
