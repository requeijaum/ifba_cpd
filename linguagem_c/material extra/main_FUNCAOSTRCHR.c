/*strchr(): fun��o utilizada para procurar por um caractere em uma string. A fun��o recebe como
par�metro uma string e um caractere. Essa fun��o retorna um ponteiro para a primeira ocorr�ncia do
caractere na string. Caso o caractere n�o esteja na string � retornado o valor NULL (0). Exemplo:*/

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
puts("o caractere est� na string");
else
puts("o caractere n�o est� na string");
system("pause");
return(0);
}
