#include <stdio.h>
#include <stdlib.h>

int  numero=1, estilo ;

int main() {
	//explicar estilo... em binario 8421 - paridade e sinal do numero
	//eh uma mascara simples

    //estilo = 0 = 0000    --> numero eh impar e positivo
    //estilo = 1 = 0001    --> numero eh impar e negativo
    //estilo = 2 = 0010    --> numero eh par   e positivo
    //estilo = 3 = 0011    --> numero eh par   e negativo
    
    //nao usei o resto... foda-se
    
    while (numero != 0) {
    	estilo = 0;
    	
    	printf("\n\nEntre com número:\n--> ");
    	scanf("%d", &numero);
    	printf("\n\n");
    	
    	if (((numero) % 2) == 0) {
    		printf("\nO número é par!\n");
    		estilo = estilo + 2 ;
    	}
    		else {
    			if (((numero) % 2) != 0) {
    				printf("\nO número é ímpar!\n");
    			}
    		}
    	
    
    	if (numero > 0) {
    		printf("\nO número é positivo!\n");
    	}    
    		else {
    			printf("\nO número é negativo!\n");
    			estilo = estilo + 1;
    		}
    	
    	}
    	
    	switch ((estilo)) {
    		case 0 : numero = numero / 10 ; break;
    		case 1 : numero = numero * 10 ; break;
    		case 2 : numero = numero - 20 ; break;
    		case 3 : numero = numero + 20 ; break;
    		
    	}
    	
    	printf("\nFim do programa! \n\n ");
    	
    
    }


