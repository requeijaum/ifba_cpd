#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // vamos inicializar o gerador de números aleatórios
  srand(time(NULL));
  
  // vamos declarar e construir uma matriz de 10 inteiros
  int valores[10];

  // vamos preencher a matriz com valores aleatórios de 0 até 10 (incluindo)
  int i;
  for(i = 0; i < 10; i++){
    //   valores[i] = rand();
   valores[i] = rand() % 11;
  }

  // vamos exibir os valores dos elementos da matriz
  for(i = 0; i < 10; i++){
    printf("%d  ", valores[i]);
  }
  
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
