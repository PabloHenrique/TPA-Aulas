/*
Fun��o: Mostrar se o n�mero � par ou �mpar
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o n�mero desejado: \n");
		scanf ("%i", &n);
	if(n%2 == 0){
		printf("O n�mero � PAR");
	}
	else{
		printf("O n�mero � �MPAR");
	}
	printf ("\n");
	system("pause");
}
