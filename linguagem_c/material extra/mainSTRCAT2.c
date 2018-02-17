#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
char str1[100], str2[100];
printf ("Entre com uma DE APOIO: ");
gets (str1);
printf ("Entre com OUTRA MENSAGEM DE APOIO: ");
gets (str2);
puts("\n");
strcat (str2, str1);
printf ("\n\n%s \n",str2);
system("pause");
return(0);
}
