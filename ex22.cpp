/*
Fun��o: Verificar se um n�mero est� entre 5 e 20, se sim exibir o seu quadrado
Autor: Pablo Henrique Vieira de Nadai
Data: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0, res = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero: \n");
		scanf ("%i", &n);
	if(n>=5 and n<=20){
		res = n * n;
		printf("Seu valor por estar dentre 5 e 20, receber� um resultado com o seu valor ao quadrado.\nResultando em: %i",res);
	}
	else{
		printf("Seu valor n�o est� entre 5 e 20,portando permanecer� o mesmo");
	}
	printf ("\n");
	system("pause");
}
