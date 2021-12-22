/*
Função: Exiba o quociente e o resto de uma divisão
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int quociente = 0, resto = 0, divd = 0, divs = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o dividendo: \n");
		scanf ("%i", &divd);
	printf ("Insira o divisor: \n");
		scanf ("%i", &divs);
	quociente = (divd / divs);
	resto = (divd % divs);
	printf("O quociente é igual a: %i \n", quociente);
	printf("E o resto é igual a: %i \n", resto);
	printf ("\n");
	system("pause");
}
