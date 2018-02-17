#include <stdio.h>
#include <stdlib.h>

float   sfixo, vendas, comissao, sfinal;

int main() {
	printf("====== Calculadora de salário do funcionário ======\n");
	printf("--> Entre com o valor do salário fixo: ");
	scanf("%f", &sfixo);
	printf("--> Entre com o valor das vendas: ");
	scanf("%f", &vendas);
	
	comissao = 0.04 * vendas ;
	sfinal = comissao + sfixo;
	
	printf("\nSalário final:    %f\n\n\n", sfinal);
	
}