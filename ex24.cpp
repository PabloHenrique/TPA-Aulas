/*
Fun��o: Exibir o maior entre 2 n�meros
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o primeiro n�mero: \n");
		scanf ("%i", &n1);
	printf ("Indique o segundo n�mero: \n");
		scanf ("%i", &n2);
	if(n1 > n2){
		printf("O maior n�mero �: %i",n1);
	}
	else if(n2 > n1){
		printf("O maior n�mero �: %i",n2);
	}
	else if(n1 == n2){
		printf("Os n�meros possuem o mesmo valor");
	}
	printf ("\n");
	system("pause");
}
