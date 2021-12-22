/*
Função: Receba horas, minutos e segundos e transforme em segundos
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float horas = 0, minutos = 0, segundos = 0, segf = 0;
	setlocale(LC_ALL, "");
	printf ("Indique as horas: \n");
		scanf ("%f", &horas);
	printf ("Indique os minutos: \n");
		scanf ("%f", &minutos);
	printf ("Indique os segundos: \n");
		scanf ("%f", &segundos);
	segf = (horas * 3600) + (minutos * 60) + segundos;
	printf("Esse valor em segundos resulta em: %f\n",segf);
	printf ("\n");
	system("pause");
}
