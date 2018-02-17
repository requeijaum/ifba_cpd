#include <stdio.h>
#include <string.h>
#include <string.h>

/*A função strcmp() distingue os caracteres entre maiúsculo e minúsculo retornando valores
diferentes caso isso aconteça. Uma opção é utilizar a função strcmpi() que executa a mesma função
mas ignorando caracteres maiúsculos e minúsculos. */

int main()
{
char str1[100], str2[100];

printf("Entre com uma string: ");
gets( str1 );
printf("\n\nEntre com outra string: ");
gets( str2 );
if(strcmp(str1,str2))
printf("\n\nAs duas strings são diferentes.\n");
else
printf("\n\nAs duas strings são iguais\n");
system("pause");
return(0);

}
