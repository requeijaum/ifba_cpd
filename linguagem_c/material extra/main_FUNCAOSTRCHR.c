/*strchr(): função utilizada para procurar por um caractere em uma string. A função recebe como
parâmetro uma string e um caractere. Essa função retorna um ponteiro para a primeira ocorrência do
caractere na string. Caso o caractere não esteja na string é retornado o valor NULL (0). Exemplo:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char nome[100], ch, *ch2;
printf("Qual o nome? -> ");
gets(nome);
printf("Qual o caractere? -> ");
ch = getchar();
ch2 = strchr(nome, ch);
if(ch2)
puts("o caractere está na string");
else
puts("o caractere não está na string");
system("pause");
return(0);
}
