#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // uma matriz de inteiros contendo sete elementos
  int valores[] = {6, 9, 12, 34, 83, 20, 17};
  int tam_matriz = 7;
  int i;
    
  // primeiro vamos exibir os valores da matriz na ordem original
  printf("Ordem original:\n");

  for(i = 0; i < tam_matriz; i++){
    printf("%d  ", valores[i]);
  }

  // agora vamos exibir na ordem inversa
  printf("\n\nOrdem inversa:\n");

  for(i = tam_matriz - 1; i >= 0; i--){
    printf("%d  ", valores[i]);
  }
  
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
