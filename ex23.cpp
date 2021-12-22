/*
Função: Calcular a média de 4 temperaturas, se for = 40 pedir para inserir outros valores
Autor: Pablo Henrique Vieira de Nadai
Data: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int t1 = 0, t2 = 0, t3 = 0, t4 = 0, md = 0;
	setlocale(LC_ALL, "");
	printf ("Indique a primeira temperatura: \n");
		scanf ("%i", &t1);
	printf ("Indique a segunda temperatura: \n");
		scanf ("%i", &t2);
	printf ("Indique a terceira temperatura: \n");
		scanf ("%i", &t3);
	printf ("Indique a quarta temperatura: \n");
		scanf ("%i", &t4);
	md = (t1 + t2 + t3 + t4)/4;
	if(md>40 and md<40){
		printf("A média das temperaturas resulta em: %i",md);
	}
	else if(md==40){
		printf("Insira outro valor");
	}
	printf ("\n");
	system("pause");
}
