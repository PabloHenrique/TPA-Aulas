/*
Função: ler e mostrar o nome de 50 pessoas
Autor: Pablo Henrique Vieira de Nadai
Data: 07/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 1;
	char nome;
	setlocale(LC_ALL, "");
	while(n<=2){
		printf ("Informe seu nome: \n");
		scanf ("%s", &nome);
		printf ("Bom dia, %s", nome);
		n = n + 1;
	}
	printf ("\n");
	system("pause");
}
