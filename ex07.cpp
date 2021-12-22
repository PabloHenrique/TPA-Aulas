/*
Função: Calcular o aumento salárial de um funcionário
Autor: Pablo Henrique Vieira de Nadai
Data: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float  valor = 0, per = 0, result = 0, dif = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o seu salário atual: \n");
	scanf ("%f", &valor);
	printf ("Insira o percentual de aumento do seu salário \n");
	scanf ("%f", &per);
	result = valor + (valor*(per/100));
	dif = result - valor;
	printf("O valor do seu salário após o aumento foi de R$: %f \n", result);
	printf("Dando a diferença em um total de R$: %f \n", dif);
	printf ("\n");
	system("pause");
}
