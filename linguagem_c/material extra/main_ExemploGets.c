/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Exemplo de utilização da função gets():
#include <stdio.h>
#include <stdlib.h>
int main()
{
char string[100];
printf ("Digite o seu nome: ");
gets (string);
printf ("\n\n Ola %s\n",string);
system("pause");
return(0);
}
