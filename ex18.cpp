/*
Função: Recerber em segundos e exibir em minutos e em horas
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float horas = 0, minutos = 0, segundos = 0;
	setlocale(LC_ALL, "");
	printf ("Indique os segundos: \n");
		scanf ("%f", &segundos);
	minutos = segundos / 60;
	horas = segundos / 3600;
	printf("Esse valor em minutos são: %f\n", minutos);
	printf("Esse valor em horas são: %f\n", horas);
	printf ("\n");
	system("pause");
}
