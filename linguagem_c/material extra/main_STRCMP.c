#include <stdio.h>
#include <string.h>
#include <string.h>

/*A fun��o strcmp() distingue os caracteres entre mai�sculo e min�sculo retornando valores
diferentes caso isso aconte�a. Uma op��o � utilizar a fun��o strcmpi() que executa a mesma fun��o
mas ignorando caracteres mai�sculos e min�sculos. */

int main()
{
char str1[100], str2[100];

printf("Entre com uma string: ");
gets( str1 );
printf("\n\nEntre com outra string: ");
gets( str2 );
if(strcmp(str1,str2))
printf("\n\nAs duas strings s�o diferentes.\n");
else
printf("\n\nAs duas strings s�o iguais\n");
system("pause");
return(0);

}
