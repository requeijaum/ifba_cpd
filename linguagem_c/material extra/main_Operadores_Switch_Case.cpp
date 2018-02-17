#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

   float fValor_a, fValor_b, fResultado;
   char cOperacao;
 
   printf("\nEntre com a operacao:");
   scanf("%c", &cOperacao);
   printf("\nEntre com o primeiro valor:");
   scanf("%f", &fValor_a);
   printf("\nEntre com o segundo valor:");
   scanf("%f", &fValor_b);
 
   switch(cOperacao)
   {
      case '+': fResultado = fValor_a + fValor_b;
                break;
      case '-': fResultado = fValor_a - fValor_b;
                break;
      case '/': fResultado = fValor_a / fValor_b;
                break;
      case '*': fResultado = fValor_a * fValor_b;
                break;
   }
 
   printf("\n %f %c %f = %f", fValor_a, cOperacao, fValor_b, fResultado);
  system("PAUSE");	
  return 0;
}
