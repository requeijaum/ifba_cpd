
#define DIM 5


#include <stdio.h>
#include <stdlib.h>

int i=0, vetor1[10], vetor2[10];

/* programa exemplo de vetor /* 

/* Corpo principal do programa */
void main() {

	printf("oi\n");
		
	for (i=0; i<DIM ; i++)
	{
		printf("vetor1[%d]=",i);
		scanf("%d,&vetor1[i]");
	}
	for (i=0 ; i<DIM; i++)
	{
		printf("vetor2[%d]=",i);
		scanf("%d",&vetor2[i]);
	}
	for (i=0 ; i<DIM; i++)
	printf("vetor1[%d] + vetor2[%d] = %d\n", i, i, vetor1[i] + vetor2[i]);

	system("pause");

}
