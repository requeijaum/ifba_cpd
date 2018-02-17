#include <stdio.h>
#include <stdlib.h>

int   codest, codcarga, pesoton;
float pesokg, imposto, total, preco;

int main () {
	printf("\n\n========== CALCULARGA - A calculadora de carga ;-) ==========\n\n");
	printf("Entre com o codigo do estado de origem: --> ");
	scanf("%d", &codest);
	
	if ((codest > 6) || (codest < 1)) {
		printf("******************************");
		printf("Código de estado nao encontrado :-/");
		printf("******************************");
		
	}
	
	printf("\nEntre com o peso da carga em ton: --> ");
	scanf("%d", &pesoton);

	printf("\nEntre com o codigo da carga: --> ");
	scanf("%d", &codcarga);
	
	if ((codcarga > 41) || (codcarga < 9)) {
		printf("\n******************************");
		printf("\nCódigo de carga nao encontrado :-/");
		printf("\n******************************\n");
		
	}
	
	pesokg = (pesoton * 1000) ;
	
	if ((codcarga > 9)  && (codcarga < 21))  preco = (100 * pesokg);
	if ((codcarga > 20) && (codcarga < 31))  preco = (250 * pesokg);
	if ((codcarga > 30) && (codcarga < 41))  preco = (340 * pesokg);
	
	switch (codest) {
		case 1 :
			imposto = (0.35 * preco) ;
			break;
	
		case 2 :
			imposto = (0.25 * preco) ;
			break;

		case 3 :
			imposto = (0.15 * preco) ;
			break;
		
		case 4 :
			imposto = (0.05 * preco) ;
			break;
		
		case 5 :
			imposto = (0.00 * preco) ;
			break;
	
			
	}

	total = (preco + imposto) ;

	printf("\nPeso da carga em kg:     %f", pesokg);
	printf("\nPreço da carga:        R$%f", preco);
	printf("\nValor do imposto:      R$%f", imposto);
	printf("\nValor total:           R$%f", total);
	printf("\n\n");
}