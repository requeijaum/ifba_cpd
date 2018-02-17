#include <stdio.h>
#include <stdlib.h>

float sbase , deducao, salario;

int main() {
	
	printf("Digite o valor do salario base:\n");
	printf("--> ");
	scanf("%f", &sbase);
	
	deducao = sbase * 0.15;
	salario = sbase + 2000 - deducao;
	
	printf("Salario: %f , deducao de: %f\n\n" , salario, deducao);
	
	
}