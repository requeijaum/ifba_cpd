#include <stdio.h>
#include <stdlib.h>

struct _compra {
	char   codigo;   //V ou P - maiusculo... pq eu quero
	int    valor;

};

struct _compra compra[25];
int x , valoravista, valoraprazo , valortotal;


int main () {
	//entrar com dados
	int a = 3;   //valor teste mudar para 25 - de 0 a 24 no for
	
	for (x=0; x<a; x++) {
		printf("\n *** essa é a compra #%d ***", x);
		
		printf("\nEntrar com o código da compra ( V ou P ):");
		printf("\n--> ");
		scanf ("%s", &compra[x].codigo);
		//tenho que dar um flush de scanf?
		//verificar isso depois...
		fflush(stdin);

		printf("\nEntrar com o valor da compra (valores inteiros):");
		printf("\n--> ");
		scanf ("%d", &compra[x].valor);
		fflush(stdin);
	}
	
	//calcular valores
	
	for (x=0; x<a; x++) {
		if (compra[x].codigo == 'V') { 
			valoravista = valoravista + compra[x].valor ;
		}
		
		if (compra[x].codigo == 'P') {
			valoraprazo = valoraprazo + compra[x].valor ;
		}
	
	}

	valortotal = valoravista + valoraprazo;

	
	//valor a receber das compras a prazo - a primeira parcela!
	//parcelas pagas em 3X
	int parcela = valoraprazo / 3 ;
	

	//imprimir valores
		printf("\n\nVALORES\n");
		printf("Valor total das compras a vista:                %d\n", valoravista);
		printf("Valor total das compras a prazo:                %d\n", valoraprazo);
		printf("Valor a receber pela parcela (primeira de 3x):  %d\n", parcela);
		printf("\n\n");
		
		
} 