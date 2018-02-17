#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nome1[50], nome2[50];
  int idade1, idade2; 
  
  printf("Digite o nome primeira pessoa: ");
  gets(nome1);
  printf("Digite a idade da primeira pessoa: ");
  scanf("%d", &idade1);
  getchar();
  printf("Digite o nome segunda pessoa: ");
  gets(nome2);
  printf("Digite a idade da segunda pessoa: ");
  scanf("%d", &idade2);
  getchar();
  printf("\n");
  printf("Nome da primeira pessoa: %s\nNome da segunda pessoa: %s\n", nome1, nome2);
  printf("Soma das idades: %d\n", idade1+idade2);
 

  system("PAUSE");	
return 0;  
}
