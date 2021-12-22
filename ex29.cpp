/*
Função: Mostrar se o número é par ou ímpar
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o número desejado: \n");
		scanf ("%i", &n);
	if(n%2 == 0){
		printf("O número é PAR");
	}
	else{
		printf("O número é ÍMPAR");
	}
	printf ("\n");
	system("pause");
}
