#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int A= 0, B = 0, C = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o valor a ser trocado: \n");
		scanf ("%i", &A);
	printf ("Indique outro valor: \n");
		scanf ("%i", &B);
	printf("Os valores que seão trocados são: \n\nValor A:%i\nValor B:%i \n", A, B);
	C = A;
	A = B;
	B = C;
	printf("\n\nOs valores após trocados ficaram: \n\nValor A:%i\nValor B:%i \n", A, B);
	printf ("\n");
	system("pause");
}
