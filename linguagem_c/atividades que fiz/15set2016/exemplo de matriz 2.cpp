/* exemplo de MATRIZ */

#include "stdio.h"
#define LIN 2
#define COL 2

main(){

	int mat [LIN] [COL], i , j;
	
	for(i=0 ; i<2 ; i++)
	for(j=0 ; j<2 ; j++)
	{
		printf("\n Entre com o elemento [%d][%d]: ", i, j);
		scanf("%d", &mat[i] [j]);	
	}
	
	for (i=0 ; i<2 ; i++)
	
	for (j=0 ; j<2 ; j++)

	//if (i == j) 

	printf("\n%d", mat[i] [j] );


	}

