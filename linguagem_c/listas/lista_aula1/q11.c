#include <stdio.h>
#include <stdlib.h>

int    base, alt ;
float  area;


int main() {
	printf("\n\n========== Calculadora de áreas de losango ==========\n");
	printf("--> Entre com o valor da diagonal maior: ");
	scanf("%d", &dmaior);
	printf("--> Entre com o valor da diagonal menor: ");
	scanf("%d", &dmenor);
	
	area = (dmaior * dmenor) / 2 ;
	
	printf("\nÁrea do losango: %f\n\n", area);

}