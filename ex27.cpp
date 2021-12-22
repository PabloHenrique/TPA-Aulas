/*
Função: Classificar a partir de categorias com a idade de um nadador
Autor: Pablo Henrique Vieira de Nadai
Data: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int idade = 0;
	setlocale(LC_ALL, "");
	printf ("Digite a sua idade: \n");
		scanf ("%i", &idade);
	if(idade < 5){
		printf("Você pertence a categoria infantil");
	}
	else if(idade >= 5 and idade <=11){
		printf("Você pertence a categoria juvenil");
	}
	else if(idade <= 18){
		printf("Você pertence a categoria adulto");
	}
	printf ("\n");
	system("pause");
}
