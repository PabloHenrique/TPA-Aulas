/*
Fun��o: Pe�a para o usu�rio um n�mero de 1 � 7, e responda com o dia da semana correspondente
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero de 1 � 7: \n");
		scanf ("%i", &n);
	if (n >= 1 and n <= 7){
		switch(n){
			case 1: printf("Domingo");
			break;
			case 2: printf("Segunda");
			break;
			case 3: printf("Ter�a");
			break;
			case 4: printf("Quarta");
			break;
			case 5: printf("Quinta");
			break;
			break;
			case 7: printf("S�bado");
			break;
		}
	}
	else{
		printf("Digite outro n�mero");
	}
	printf ("\n");
	system("pause");
}
