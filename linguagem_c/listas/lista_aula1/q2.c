#include <stdio.h>
#include <stdlib.h>

int x, valor[3];

int main(){
	for (x=0; x<3; x++) {
		printf("Leia o valor #%d\n", x);
		scanf("%d", &valor[x]);
	}

	
	int media=0, temp=0;
	for (x=0; x<3 ; x++) temp = temp + valor[x];
	media = (temp / 3) ;

	printf("\nMedia é: %d\n", media);

}