#include <stdio.h>
#include <stdlib.h>

//questao 8
int   x;
float n[3], mul=1;


int main () {

	for (x=0 ; x<3 ; x++) {
		printf("\nEntre com o número %d - ele deve ser real!\n--> ", x);
		scanf("%f", &n[x]);
	}
	
	for (x=0 ; x<3 ; x++) {
		mul = mul * n[x];
	}
	
	printf("\nMultiplicação deu: %f\n\n", mul);
}