#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[])
{
			int i, j;
		//	clrscr( );
			for ( i =1; i < 6; i ++)
				for ( j = 1; j < 10; j ++)
					printf ("\n%d x %d = %d", i, j, i * j);

  system("PAUSE");	
  return 0;
}
