/*
Fun��o: Mostrar os n�meros entre os dois pedidos pelo usu�rio
Autor: Pablo Henrique Vieira de Nadai
Data: 07/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0, res = 0, troca = 0;
	setlocale(LC_ALL, "");
	printf("Insira o 1� n�mero:\n");
	scanf ("%i", &n1);
	printf("Insira o 2� n�mero:\n");
	scanf ("%i", &n2);
	if(n1 > n2){
		for(int c = n1; c >= n2; c--){
			printf("%i\n", c);
		}
	}
	else{
		for(int c = n2; c >= n1; c--){
			printf("%i\n", c);
		}
	}
	printf ("\n");
	system("pause");
}
