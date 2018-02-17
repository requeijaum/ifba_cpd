#include <stdio.h>
#include <stdlib.h>

int   s;
float m ,h;

int main() {
	printf("Entre com o número em segundos:\n");
	printf("--> ");
	scanf("%d", &s);
	
	m = s / 60;
	h = m / 60;

	printf("\n");
	printf("\nsegundos: %d", s);
	printf("\nminutos:  %f", m);
	printf("\nhoras  :  %f", h);	
	printf("\n\n");

}