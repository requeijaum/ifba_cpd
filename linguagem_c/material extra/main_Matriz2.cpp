#include <stdio.h>
#include <stdlib.h>


main ( )
{
int mat[3][3],i, j;
for ( i=1; i<3; i++ )
for ( j=1; j<3; j++ )
{
printf ("\nEntre com o elemento[%d][%d]", i, j);
scanf ("%d", &mat[ i ][ j ]);
}
for ( i=1; i<3; i++ )
for ( j=1; j<3; j++ )
if ( i == j )
printf ("\n%d", mat[ i ][ j ]);


  system("PAUSE");	
  return 0;
}
