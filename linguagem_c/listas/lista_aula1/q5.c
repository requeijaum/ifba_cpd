#include <stdio.h>
#include <stdlib.h>

int    base, alt ;
float  area;


int main() {
	printf("Calculadora de áreas de triângulo\n");
	printf("--> Entre com o valor da base: ");
	scanf("%d", &base);
	printf("--> Entre com o valor da base: ");
	scanf("%d", &alt);
	
	
	area = (base * alt ) / 2 ;
	
	printf("\nÁrea do triângulo: %f\n\n", area);



}