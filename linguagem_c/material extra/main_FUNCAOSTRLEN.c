//A função strlen() retorna um valor do tipo inteiro. Exemplo:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int tamanho;
char str[100];
printf("Entre com uma string: ");
gets(str);
tamanho = strlen(str);
printf("\n\nTamanho da string digitada %d\n", tamanho);
system("pause");
return(0);
}
