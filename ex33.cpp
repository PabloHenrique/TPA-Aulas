/*
Fun��o:Entre um a doze, insira quantos dias tem m�s correspondente ao n�mero
Autor: Pablo Henrique Vieira de Nadai
Data: 06/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero de 1 � 12: \n");
		scanf ("%i", &n);
		switch(n){
			case 1: printf("31");
			break;
			case 2: printf("28");
			break;
			case 3: printf("31");
			break;
			case 4: printf("31");
			break;
			case 5: printf("30");
			break;
			case 6: printf("31");
			break;
			case 7: printf("30");
			break;
			case 8: printf("31");
			break;
			case 9: printf("30");
			break;
			case 10: printf("31");
			break;
			case 11: printf("30");
			break;
			case 12: printf("31 ");
			break;
			default: printf("Esse n�mero n�o corresponde a nenhum m�s");
			break;
		}
	printf ("\n");
	system("pause");
}
