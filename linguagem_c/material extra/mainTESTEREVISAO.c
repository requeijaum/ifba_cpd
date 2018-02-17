#include <stdio.h>
#include <stdlib.h>

char teste[10];
int main(int argc, char *argv[])
{
  printf("DIGITE UM VALOR\n");
  scanf("%c\n", &teste);
  printf("TESTE%c", &teste);
  if (teste!="luiz")
  printf("SÃO IGUAIS\n");
  else
  printf("NAO SAO IGUAIS\n");
  getchar();
  system("PAUSE");	
  return 0;
}
