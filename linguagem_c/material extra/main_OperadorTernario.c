#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, val;
  
  printf("Digite dois n�meros");
  
  scanf("%d %d", &a, &b);
  
  val = (a==b)?a+b:(a>b)?a:b;

  printf("O resultado deles e %d\n", val);
  system("PAUSE");	
  return 0;
}
