/* exemplo de MATRIZ */

#include "stdio.h"

main()

{
	static int
	
	a[3] [4] = 	{	{-14,-36,-62, 78},
					{-77, 14 -92, 17},
					{67, -51, 18,-60}
				},
				
	b[4] [2] = 	{	{7,   34},
					{-23, 69},
					{32, -1}
				};		
	
	int i, j, k, c[3] [2] ;
	 
	for (i=0 ; i<3 ; i++)
		{
			for (j=0 ; j<2 ; j++)
			{
				for (c[i] [j] = 0 , k=0; k<4; k++)
				{
					c[i] [j] = a[i] [k] * b[k][j];
					printf("c[%d] [%d] = %d\n", i, j, c[i] [j]);
				}
			}
			printf("\n");
		}
}

