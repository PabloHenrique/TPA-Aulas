/*
Fun��o: Exibir o maior entre 3 n�meros
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	char nome;
	int media = 0;
	setlocale(LC_ALL, "");
	printf ("Indique seu nome: \n");
		scanf ("%s", &nome);
	printf ("Indique sua media: \n");
		scanf ("%i", &media);
	if(media >= 7){
		printf("Voc� foi aprovado!");
	}
	else{
		printf("Voc� foi reprovado!");
	}
	printf ("\n");
	system("pause");
}
