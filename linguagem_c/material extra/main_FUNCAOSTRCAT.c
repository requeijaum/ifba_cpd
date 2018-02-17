#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Função strcat()
/*Esta função é utilizada para concatenar duas strings, ou seja, o conteúdo de uma string é adicionado
ao final de outra string. A função strcat() está na biblioteca string.h. A forma geral da função é:*/

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
