#include <stdio.h>
#include <stdlib.h>

//Receber um programa que receba a idade de 15 pessoas
//calcular e imprimir:

//qtde de pessoas em CADA faixa etária;
//a % de CADA faixa etária em relação ao total de pessoas --> vários (%n/total)

//As faixas etárias são:
//  1 a 15 anos
// 16 a 30 anos
// 31 a 45 anos
// 46 a 60 anos
//   >= 61 anos

int a = 3 , x ;     //~a~ é valor teste... mudar para 14.
int idade[15]; 	    //queria usar um #define aqui
int faixa[5];
float porcentagem[5];

int main() {
	printf("\nAs faixas etárias são:\n0   1 a 15 anos\n1   16 a 30 anos\n2   31 a 45 anos\n3   46 a 60 anos\n4   >= 61 anos\n");

	for (x=0 ; x<a ; x++) {
		printf("Entre com o valor da idade da pessoa %d: \n--> ", x);
		scanf("%d", &idade[x]);
	}

	//contar pessoas em CADA faixa etária

	for (x=0 ; x<a ; x++) {
		if ((idade[x] >  1) && (idade[x] < 16)) { faixa[0]++; }
		
		if ((idade[x] > 15) && (idade[x] < 31)) { faixa[1]++; } 

		if ((idade[x] > 30) && (idade[x] < 46)) { faixa[2]++; }
	
		if ((idade[x] > 45) && (idade[x] < 61)) { faixa[3]++; }

		if (idade[x] >= 61)                     { faixa[4]++; }


 	}

	//imprimir qtde de pessoas em cada faixa
	for (x=0 ; x<5 ; x++) printf("\nPessoas na faixa %d : %d\n", x, faixa[x]);

	//calcular %tagem de cada faixa etaria/total de pessoas

	for (x=0 ; x<a ; x++) {
		printf("\nPorcentagem de Faixa Etaria %d: %f \n", x, (float)(faixa[x]/a) );
	} //nao ta imprimindo a porcentagem... porra!


}
