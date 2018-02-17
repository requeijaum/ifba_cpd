#include <stdio.h>
#include <stdlib.h>

float   deposito , juros, rend;
int     meses;

int main(){
	printf("\nDigite o valor do depósito:  ");
	scanf("%f", &deposito);

	printf("\nDigite o valor da taxa de juros (ex: 0.05):  ");
	scanf("%f", &juros);

	printf("\nDigite o numero de meses a contar:");
	scanf("%d", &meses);
	
	rend = deposito;
	
	int x=0;
	for (x=0; x < meses; x++) {
		rend = rend + (rend * juros); 
	}
	
	printf("\nDeposito:   %f \nRendimento: %f\n", deposito, rend);

}