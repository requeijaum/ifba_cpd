#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int i, varia;
int vetor1[DIM], vetor2[DIM];

void somar()
{
for ( i=0; i<DIM; i++ )
printf ("vetor1[%d] + vetor2[%d] = %d\n", i, i, vetor1[ i ] + vetor2[ i ]);
}


void subtrair()
{
for ( i=0; i<DIM; i++ )
printf ("vetor1[%d] - vetor2[%d] = %d\n", i, i, vetor1[ i ] - vetor2[ i ]);
}

void multiplicar()
{
for ( i=0; i<DIM; i++ )
printf ("vetor1[%d] * vetor2[%d] = %d\n", i, i, vetor1[ i ] * vetor2[ i ]);
}

void divisao()
{
for ( i=0; i<DIM; i++ )
printf ("vetor1[%d] / vetor2[%d] = %d\n", i, i, vetor1[ i ] / vetor2[ i ]);
}

int main(int argc, char *argv[])
{
		for ( i=0; i<DIM; i++ )
		{
		printf ("Informe o vetor1[%d]=", i);
		scanf ("%d", &vetor1[ i ]);
		}
		for ( i=0; i<DIM; i++ )
		{
		printf ("Informe o vetor2[%d]=", i);
		scanf ("%d", &vetor2[ i ]);
		}
		printf ("Informe o que voce quer 1-soma, 2-sub, 3-mul, 4-divi\n");
		scanf ("%d", &varia);

	switch(varia)
	{
	case 1:
         {
               somar();
               break;
         }
         
         case 2:
         {
                 subtrair();
                 break;
         }
         case 3:
         {
                 multiplicar();
                 break;
         }
         case 4:
         {
                 divisao();
                 break;
         }
 }
  system("PAUSE");	
  return 0;
}
