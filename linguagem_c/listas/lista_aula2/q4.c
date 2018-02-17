#include <stdio.h>
#include <stdlib.h>

float   nota1, nota2, media ;

int main () {
	do {
		printf("\nentre com a I nota: \n--> ");
		scanf("%f", &nota1);
		
		printf("\nentre com a II nota: \n--> ");
		scanf("%f", &nota2);
		
		media = ((nota1+nota2)/2) ;
		
		if ((media > 0 ) && (media <  4) ) printf("\nREPROVADO\n");
		if ((media > 4 ) && (media <  7) ) printf("\nEXAME\n");
    	if ((media > 7 ) && (media <= 10) ) printf("\nAPROVADO\n");


	} while (nota1 <= 0);

}
