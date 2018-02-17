#include <stdio.h>
#include <stdlib.h>

/* 
Faça uma Programa que receba o valor e o código de várias mercadorias 
vendidas em um determinado dia. Os códigos obedecem a tabela abaixo:  

'L' - limpeza  
'A' - alimentação  
'H' - higiene  

Calcule e imprima:  

	• total vendido naquele dia, com todos os códigos juntos;  
	• total vendido naquele dia em cada um dos códigos.  

Para encerrar a entrada de dados, digite o valor da mercadoria zero.  

*/

struct _produto {
	char   codigo;   //V ou P - maiusculo... pq eu quero
	int    valor;

};

struct _produto produto[5];
int x , valorL, valorA , valorH , valortotal;


int main () {
	//entrar com dados
	int a = 5;   //valor teste mudar para 25 - de 0 a 24 no for
	
	for (x=0; x<a; x++) {
		printf("\n *** essa é o produto #%d ***", x);
		//implementar restrição no valor do código
		
		
		printf("\nEntrar com o código do produto ( L, A ou H ):");
		printf("\n--> ");
		scanf ("%s", &produto[x].codigo);
		//tenho que dar um flush de scanf?
		//verificar isso depois...
		fflush(stdin);

		/* 
		if (&produto[x].codigo =/= ('L' || 'A' || 'H')) {
			x--;
			printf("Código não encontrado... digite novamente");
			passar1=0;
		}
		
		if (passar1 =/= 0) {
		*/
		
		printf("\nEntrar com o valor do produto (valores inteiros):");
		printf("\n--> ");
		scanf ("%d", &produto[x].valor);
		fflush(stdin);
		
		// }
	}
	
	
	//calcular valores
	
	for (x=0; x<a; x++) {
		if (produto[x].codigo == 'L') { 
			valorL = valorL + produto[x].valor ;
		}
		
		if (produto[x].codigo == 'A') {
			valorA = valorA + produto[x].valor ;
		}
		
		if (produto[x].codigo == 'H') {
			valorH = valorH + produto[x].valor ;
		}

	
	}

	valortotal = valorL + valorA + valorH;

	
	
	//imprimir valores
		printf("\n\nVALORES\n");
		printf("Valor total das produtos de Limpeza:             %d\n", valorL);
		printf("Valor total das produtos de Alimentação:         %d\n", valorA);
		printf("Valor total das produtos de Higiene:             %d\n", valorH);
		printf("Valor total absoluto:                            %d\n", valortotal);
		printf("\n\n");
			
	
	
}	