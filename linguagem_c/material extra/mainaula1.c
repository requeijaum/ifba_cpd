#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x, y, soma;

int main(int argc, char *argv[]) {
	printf("Por favor, digite um número\n");
	
	scanf("%d", &x);
	
	printf("Por favor, digite outro número\n");
	
	scanf("%d", &y);
	
	soma=x+y;
	
	printf("A SOMA E %d\n", soma);
	
	
//	system("pause");
	return 0;
}
