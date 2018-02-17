#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{       long int n, i, fat;
       int resp;
       printf("Programa feito por: Rodrigo de Lima Amora de Freitas.\n\n");
       while(resp!=2){
       printf("Digite um numero: ");
       scanf("%li", &n);  
       fat=1;
       for(i=n; i>1; i--){
             fat*=n;
             n--;
             }
             printf("Fatorial: %li", fat);
             printf("\n\nDeseja continuar? \n1-Sim 2-Nao \nResp: ");
             scanf("%d", &resp); 
             printf("\n\n");             
             }
             printf("Obrigado por usar o programa.");
            getch(); //Esperando um enter,
  system("PAUSE");	
  return 0;
}
