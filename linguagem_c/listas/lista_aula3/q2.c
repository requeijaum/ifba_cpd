#include <stdio.h>

//aeHOOOO
//funcionario recebe aumento salarial ANUALMENTE
//a) funcionario contratado em 1995 com salario inicial de 1000,00 golpinhos
//b) recebeu aumento de 1,5% sobre seu salario inicial
//c) A partir de 1997 (inclusive) os aumentos sempre corresponderam ao dobro do percentual do ano anterior


void main(){
	float salario=1000, x, p ; int ano;
	for (ano=1995; ano<2017; ano++) {

		if (ano==1996)		p= 0.015 ;  //o valor de x ta 0, porra
		else 			p=p*2;

		printf("Ano: %d, Salario: %f, taxa: %f, Aumento: %f \n", ano, salario, p, x);
		//formatar esse printf depois, viu filho?
		

		x=(salario * p);
		salario= salario + x;
	}			
}
