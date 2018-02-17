#include <stdio.h>
#include <stdlib.h>

//q8 lista2 - mais adaptações do Portugol
//tá dando ruim... por quê?

char nome [2];
int  idade[2];

int soma, i, x ;

int main () {

while (1) {
	for (x=0; x<2 ; x++) {
		printf("\n\nEntre com o nome  da pessoa #%d:\n--> ", x);
		scanf("%s", &nome[x]);
		fflush(stdin);
		printf("\n\nEntre com a idade da pessoa #%d:\n--> ", x);
		scanf("%d", &idade[x]);
		fflush(stdin);
	
		soma += idade[x]; 
	
	}
		
	printf("\nA soma total das idades é: %d", soma);
	

}

}