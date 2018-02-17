/* strstr(): função utilizada para localizar uma string (substring) dentro de outra string. A função
recebe como parâmetro duas string e retorna um ponteiro para o início da ocorrência da segunda
string dentro da primeira, passada como parâmetro. Exemplo: */
	
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
