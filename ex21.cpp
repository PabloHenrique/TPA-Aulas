/*
Fun��o: Verificar se um n�mero � positivou ou negativo
Autor: Pablo Henrique Vieira de Nadai
Data: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero: \n");
		scanf ("%i", &n);
	if(n>0){
		printf("Esse valor � positivo");
	}
	else{
		printf("Esse valor � negativo");
	}
	printf ("\n");
	system("pause");
}
