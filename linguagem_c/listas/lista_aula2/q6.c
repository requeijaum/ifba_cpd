#include <stdio.h>
#include <stdlib.h>

float  eur, usd, brl, coteur, cotusd ;

int main () {
	printf("\n\n*** COTACAO DAS PUTARIA DO DIERO ***\n\n");
	printf("Entre com o valor em reais:\n--> BRL ");
	scanf("%f", &brl);
	fflush(stdin);
	    
    // cotacoes de hoje (24/08/2016)
    // 1 dolar = 3,225 reais
    // 1 euro  = 3,633 reais
	
	printf("Entre com a cotação do dólar (para o real):\n--> BRL ");
	scanf("%f", &cotusd);
	fflush(stdin);
	
	printf("Entre com a cotação do euro  (para o real):\n--> BRL ");
	scanf("%f", &coteur);
	fflush(stdin);
		
    printf("\n\nUSD 1.00 vale BRL  %f", cotusd);
	printf("\nEUR 1.00 vale BRL  %f  ", coteur);
	printf("\nVocê tem BRL       %f\n", brl);
	
	//vamos contar direito
	usd = (brl / cotusd) ;
	eur = (brl / coteur) ;
	
	printf("\nEntão você pode ter:  USD %f",     usd);
	printf("\n   ou você pode ter:  EUR %f\n\n", eur);

	
}