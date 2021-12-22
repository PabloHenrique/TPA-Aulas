/*
Função:Entre um a doze, insira quantos dias tem mês correspondente ao número
Autor: Pablo Henrique Vieira de Nadai
Data: 06/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um número de 1 á 12: \n");
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
			default: printf("Esse número não corresponde a nenhum mês");
			break;
		}
	printf ("\n");
	system("pause");
}
