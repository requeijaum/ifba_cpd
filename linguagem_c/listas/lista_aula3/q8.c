#define NUMERO 2

#include <stdio.h>
#include <stdlib.h>

/* Dez funcionários:
	codigo
	numero horas trabalhadas / mes
	turno (M, V, N)
	categoria (Op, Ger)
	Valor da hora trabalhada --> (nh/mes)/(8*22)  de acordo com a CLT
	
Ler informacoes dos funcionarios (via struct, fih)
Nao pode ser informado turno e nem categoria inexistente
trabalhar com letras maiusculas - funcao 1

depois calcular o valor da hora trabalhada... conforme tabela - funcao 2
150 reais = salario minimo

depois calcular o salario inicial dos func. baseado no valor da hora trabalhada
e no num. de horas trabalhadas - funcao 3

depois calcular o valor do auxilio-almosso - recebido por funcionario de acordo
com seu salario INICIAL - conforme uma tabela - funcao 4

depois mostrar o código, num. horas trabalhadas, valor hora trabalhada, salário
INICIAL, auxílio-almosso, salaário final (inicial + ajuda-almosso)

*/

//Declarar funcionarios

	struct _func {
                int    	cod, nhtm;
                float   vht, sinicial, almosso, sfinal;
                char    turno, cat;

	};

//Vetor da estrutura

	struct _func funcionarios[NUMERO];		

//variaveis globais para funcionar direito
int x;


//funcoes!

int lerinfo(int *x) {

	printf("Digite as informações dos funcionários\n");
	printf("Código --> ");
	scanf("%d", &funcionarios[x].cod);
	
	printf("\nNumero de horas trabalhadas no mês --> ");
	scanf("%d", &funcionarios[x].nhtm);

	printf("\nTurno --> ");
	scanf("%c", &funcionarios[x].turno);
	
	if ((funcionarios[x].turno == 'M') || (funcionarios[x].turno == 'V') || (funcionarios[x].turno == 'N')) {	
		printf("\nCategoria --> ");
	        scanf("%c", &funcionarios[x].cat);
		
		if ((funcionarios[x].cat == 'O') || (funcionarios[x].cat == 'G')) {
			printf("\nValor da hora trabalhada --> ");
			scanf("%d",&funcionarios[x].vht);		
		}
	

		return 1;  //passa e vai calcular!
	
	}	

	} else { 
		printf("\n*** Não confere. Favor digitar novamente. ***\n");
		//devo diminuir o valor de x para reentrar com aquele indice?
		x--;
		return 0;  //não passa e manda repetir
	}

}

void calcularvht (int *x) {
	int smin = 150;   //valor do salário mínimo

	if (funcionarios[x].cat == 'G') {
		if (funcionarios[x].turno == 'N') funcionarios[x].vht = 0.18 * smin;
		
		if ((funcionarios[x].turno == 'M') || (funcionarios[x].turno == 'V')) funcionarios[x].vht = 0.15 * smin;	
	}
	
	if (funcionarios[x].cat == 'O') {
		if (funcionarios[x].turno == 'N') funcionarios[x].vht = 0.13 * smin;
		
		if ((funcionarios[x].turno == 'M') || (funcionarios[x].turno == 'V')) funcionarios[x].vht = 0.10 * smin;	
	
	}

	//return 1
	//não vou retornar nada... não tô afim

}

void calcularsinicial(int *x) {
	//usar vht e nhtm
	funcionarios[x].sinicial = funcionarios[x].vht * funcionarios[x].nhtm ;

}


void calcularalmosso (int *x) {
	if ((funcionarios[x].sinicial > 0) && (funcionarios[x].sinicial <= 300)) 
		funcionarios[x].almosso = 0.20 * funcionarios[x].sinicial ;

	if ((funcionarios[x].sinicial >= 300) && (funcionarios[x].sinicial <= 600)) 
		funcionarios[x].almosso = 0.15 * funcionarios[x].sinicial ;

	if (funcionarios[x].sinicial > 600) 
		funcionarios[x].almosso = 0.05 * funcionarios[x].sinicial ;

}

void calcularsfinal (int *x) {
	funcionarios[x].sfinal = funcionarios[x].sinicial + funcionarios[x].almosso ;
}


void imprimir (int *x) {
	//para cada funcionario :P
	
	printf("\n\n========== DEMONSTRATIVO DE PAGAMENTO ==========\n\n");
	printf("\n\n");
	printf("Funcionário cod. %d\n", funcionarios[x].cod);
	printf("\n     # de horas trabalhadas no mês:   %d", funcionarios[x].nhtm);
	printf("\n     Valor da hora trabalhada:        %f", funcionarios[x].vht);
	printf("\n     Salário inicial:                 %f", funcionarios[x].sinicial);
	printf("\n     Auxílio-alimentação:             %f", funcionarios[x].almosso);
	printf("\n     Salário final                    %f", funcionarios[x].sfinal);
	
}


int main() {

	//ler funcionarios x vezes
	int x;	for (x=0; x<3; x++) {

	lerinfo(x);

	//pegar parametro de lerinfo() e usar como condicional para calcular
	if (lerinfo() == 1) {
		calcularvht(x);
		calcularsinicial(x);
		calcularalmosso(x);
		calcularsfinal(x);
		imprimir(x);
	}
	

	}
}	
