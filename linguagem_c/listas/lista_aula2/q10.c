#include <stdio.h>
#include <stdlib.h>

int A, B, C, resultado;

int main() {
	printf("\n\nLeia número A:\n--> ");
	scanf("%d", &A);
	printf("\n\nLeia número B:\n--> ");
	scanf("%d", &B);
	printf("\n\nLeia número C:\n--> ");
	scanf("%d", &C);
	
	resultado = ((A-B)*C);
	
	printf("\n\n (A-B) * C = (%d - %d) * %d = %d\n\n", A, B, C, resultado);
	
}