/*
Função: Exibir em ordem crescente dentre 3 números
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0, n3 = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o primeiro número: \n");
		scanf ("%i", &n1);
	printf ("Indique o segundo número: \n");
		scanf ("%i", &n2);
	printf ("Indique o terceiro número: \n");
		scanf ("%i", &n3);
	//COMPARAÇÃO
	if(n1 <= n2 and n2 <= n3){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n1,n2,n3);
	}
	else if(n1 <= n3 and n3 <= n2){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n1,n3,n2);
	}
	else if(n2 <= n1 and n1 <= n3){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n2,n1,n3);
	}
	else if(n2 <= n3 and n3 <= n1){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n2,n3,n1);
	}
	else if(n3 <= n1 and n1 <= n2){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n3,n1,n2);
	}
	else if(n3 <= n2 and n2 <= n1){
		printf("Colocando esses números em ordem crescente, obtem-se: %i, %i, %i", n3,n2,n1);
	}
	//COMPARAÇÃO
	printf ("\n");
	system("pause");
}
