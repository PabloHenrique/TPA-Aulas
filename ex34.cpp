/*
Fun��o: A partir de 4 n�meros, o �suario devera escolher dentre as 4 opera��es matem�ticas simples
Autor: Pablo Henrique Vieira de Nadai
Data: 06/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

/*
1 = Adi��o
2 = Subtra��o
3 = Multiplica��o
4 = Divis�o
*/
int main(){
	int n = 0, n2 = 0, cod = 0, rest = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero: \n");
		scanf ("%i", &n);
	printf ("Indique outro n�mero: \n");
		scanf ("%i", &n2);
	printf ("Indique a opera��o desejada: \n");
		scanf ("%i", &cod);
	if(cod>=1 and cod<=4){
		switch(cod){
			case 1:
				rest = n + n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 2:
				rest = n - n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 3:
				rest = n * n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 4:
				rest = n / n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
		}
	}
	else{
		printf("Valor n�o correspondido");
	}
	printf ("\n");
	system("pause");
}
