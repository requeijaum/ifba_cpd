#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char str1[100], str2[100], str3[100];
printf ("Entre com uma string: ");
gets (str1);
strcpy (str2, str1); /* Copia str1 em str2 */
strcpy (str3, "Voce digitou a string "); /* Copia a frase "Voce digitou a string" em str3 */
printf ("\n\n %s %s\n",str3,str2);
system("pause");
return(0);
}
