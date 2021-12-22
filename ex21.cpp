/*
Função: Verificar se um número é positivou ou negativo
Autor: Pablo Henrique Vieira de Nadai
Data: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um número: \n");
		scanf ("%i", &n);
	if(n>0){
		printf("Esse valor é positivo");
	}
	else{
		printf("Esse valor é negativo");
	}
	printf ("\n");
	system("pause");
}
