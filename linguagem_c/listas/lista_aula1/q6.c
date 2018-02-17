#include <stdio.h>
#include <stdlib.h>

int    nhtm, sminimo;
float  vht, sbruto, imposto, sfinal;

int main (){
	printf("-----calculadora de salários - q6 lista 1-----\n");
	printf("Entre com valores inteiros, por favor...\n\n");	

	printf("Entre com o número de horas trabalhadas\n");
	printf("--> ");
	scanf("%d", &nhtm);	

	printf("Entre com o valor do salário mínimo\n");
	printf("--> ");
	scanf("%d", &sminimo);
	
	vht     = sminimo / 2      ;
	sbruto  = nhtm * vht       ;
	imposto = 0.03 * sbruto    ;
	sfinal  = sbruto - imposto ;

	printf("\nvht           = %f", vht);
	printf("\nsbruto        = %f", sbruto);
	printf("\nimposto       = %f", imposto);
	printf("\nSalário final = %f", sfinal);   //ver formatação de casas decimais via printf
	printf("\n\n\n");
}