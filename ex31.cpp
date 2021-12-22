/*
Fun��o: Apresentar o nome e o pre�o de um lanche conforme os pre�os listados
Autor: Pablo Henrique Vieira de Nadai
Data: 06/11/2019
*/

//Pre�os
/*
1 = cachorro-quente / R$3.50;
2 = x-salada / R$5.00;
7 = x-buguer / R$8.90;
15 = x-tudo / R$12.70;
Outro valor = n�o cadastrado;
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Observe o card�pio e escolha de acordo com o n�mero para consultar o pre�o do lanche desejado: \n");
		scanf ("%i", &n);
		switch(n){
			case 1: printf("R$3,50");
			break;
			case 2: printf("R$5.00");
			break;
			case 3: printf("R$8.90");
			break;
			case 4: printf("12.70");
			break;
			default: printf("Valor n�o cadastrado");
			break;
		}
	printf ("\n");
	system("pause");
}
