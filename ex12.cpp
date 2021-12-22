/*
Função: Receber o ano de nascimento e exibir a idade em anos e em dias
Autor: Pablo Henrique Vieira de Nadai
Data: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int idadeDias = 0, anoNasc = 0, anoAtual, idadeAnos;
	setlocale(LC_ALL, "");
	printf ("Insira o seu ano de nascimento: \n");
		scanf ("%i", &anoNasc);
	printf ("Insira o ano atual: \n");
		scanf ("%i", &anoAtual);
	idadeDias = anoAtual - anoNasc;
	idadeAnos = idadeDias * 365;
	printf("A sua idade em dias é: %i \n", idadeDias);
	printf("A sua idade em anos é: %i \n", idadeAnos);
	printf ("\n");
	system("pause");
}
