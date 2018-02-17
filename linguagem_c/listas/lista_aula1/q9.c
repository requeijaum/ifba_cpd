#include <stdio.h>
#include <stdlib.h>

//q9

int x;
float  nota[3], media;

int main () {

	for (x=0 ; x<3 ; x++) {
		printf("\nEntre com a nota #%d \n--> ", x);
		scanf("%f", &nota[x]);
	}
	
		media = (( (nota[0]*2) + nota[1] + (nota[2]*3) ) / 3 ) ;

	printf("\nMédia ponderada:    %f\n\n", media);

}