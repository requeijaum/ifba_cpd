#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float nreal, pfrac, arr;
int   pint;

int main () {

	printf("\nEntre com o número - ele deve ser real!\n--> ");
	scanf("%f", &nreal);
	
	//abusar de casting, hehe
	//a função floor ou "piso" está no math.h... precisa incluir.
	
	pfrac = nreal - (int)(nreal) ;
	pint  = (int)(nreal)         ;
	arr   = floor(nreal)         ;
	
	printf("\nParte fracionária:    %f", pfrac);
	printf("\nParte inteira:        %d", pint) ;
	printf("\nArredondamento:       %f", arr)  ;
	printf("\n\n\n");		
}