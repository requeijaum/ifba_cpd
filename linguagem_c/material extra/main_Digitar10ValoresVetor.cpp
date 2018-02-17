#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // vamos declarar um vetor de 10 inteiros
  int valores[10];
  int i;

  // agora vamos solicitar ao usu�rio que informe os 10 valores para
  // os elementos da matriz. O mais recomend�vel neste caso � usar um
  // la�o for que repetir� 10 vezes e, a cada repeti��o, solicitaremos
  // um valor
  for(i = 0; i < 10; i++){
    printf("Informe o valor %d: ", (i + 1));
    scanf("%d", &valores[i]);
  }

  // para finalizar vamos exibir os valores informados pelo usu�rio e
  // presentes nos elementos do vetor
  printf("\nOs valores informados foram:\n");

  for(i = 0; i < 10; i++){
    printf("O valor %d foi: %d\n", (i + 1), valores[i]);
  }
  
  system("PAUSE");	
  return 0;
}
