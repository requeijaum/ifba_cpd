/* strstr(): fun��o utilizada para localizar uma string (substring) dentro de outra string. A fun��o
recebe como par�metro duas string e retorna um ponteiro para o in�cio da ocorr�ncia da segunda
string dentro da primeira, passada como par�metro. Exemplo: */
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char s1[] = "linguagem de desenvolvimento c";
char s2[] = "mento", *pt;
pt = strstr(s1, s2);
if(pt)
printf("%s esta na string\n", pt);
else
puts("a substring nao foi localizada\n");
system("pause");
return(0);
}
