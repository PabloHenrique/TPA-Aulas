/*
Fun��o: Ler um valor e verificar se � maior do que 100, se sim somar 150
Autor: Pablo Henrique Vieira de Nadai
Data: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0, res = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero: \n");
		scanf ("%i", &n);
	if(n>100){
		res = n + 150;
		printf("Esse valor � maior do que 100, portanto ser� somado 150, resultando em: %i",res);
	}
	else{
		printf("Esse valor � menor do que 100, portanto n�o ser� somado a nenhum valor, permanecendo em: %i",n);
	}
	printf ("\n");
	system("pause");
}
