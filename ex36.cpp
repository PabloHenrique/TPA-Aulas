/*
Função: Mostrar o quad de um número até o usuário digitar 0
Autor: Pablo Henrique Vieira de Nadai
Data: 07/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n = 0, quad = 0, c = 0, c2 = 0;
	setlocale(LC_ALL, "");
	printf("Para iniciar digite 1, para sair digite 0\n");
	scanf ("%i", &c2);
	while(c2 != 0){
		printf ("Indique um número: \n");
			scanf ("%i", &n);
			quad = n * n;
		printf ("O quadrado do seu número é:%i\n", quad);
		printf ("Se quiser outro número digite 1, senão digite 0\n");
			scanf ("%i", &c2);
		if(c == 0 and c ==1){
			if(c == 0){
				printf("O programa vai ser encerrado\n");
			}
			else if (c == 1){
				printf ("Indique outro número: \n");
				scanf ("%i", &n);
				quad = n * n;
				printf ("O quadrado do seu número é:%i\n", quad);
			}
		}
	}
	printf ("\n");
	system("pause");
}
