#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Fun��o strcat()
/*Esta fun��o � utilizada para concatenar duas strings, ou seja, o conte�do de uma string � adicionado
ao final de outra string. A fun��o strcat() est� na biblioteca string.h. A forma geral da fun��o �:*/

int main()
{
char str1[100], str2[100];
printf ("Entre com uma string: ");
gets (str1);
strcpy (str2,"OLA EU CONCATENEI ESSA FRASE COM A STRING ");
strcat (str2, str1);
printf ("\n\n%s \n",str2);
system("pause");
return(0);
}
