#include <stdio.h>
#include <stdlib.h>

float raio,c,a,v; 


int main() {
	printf("\n\n========== Calculadora de áreas de circunferências diversas ===========\n");
	printf("--> Entre com o valor do raio: ");
	scanf("%f", &raio);

	c = 2 * 3.1415 * raio ;
	a = 3.1415 * (raio * raio) ;
	v = (3 * 3.1415 * (raio * raio * raio)) / 4 ;
	
	printf("\n\n");
	printf("-->comprimento da esfera:    %f\n", c);
	printf("-->área da esfera:           %f\n", a);
	printf("-->volume da esfera:         %f\n", v);
	printf("\n\n");
	



}