#include <stdio.h>

//ler 10 conjuntos de 2 valores --> 3 69  ... isso 10 vezes

//o primeiro é o numero do aluninho, e o segundo a sua altura em cm

//encontre o aluno mais alto e mais baixo
//mostre o numero do aluno mais alto e mais baixo... com suas respectivas alturas

//declarar 2 veotres para numero e altura
int n[10], alt[10];

//valores de altura comparativos e de quem sao
int altmaior, altmenor, maioraluno, menoraluno, menor, maior;

//limitador de valor... usar para testes
//mudar pra 10 - já que a questão pede

int a=10;

int main(){
	int x;

	printf("Entre com o numero do aluno e sua altura em cm\n");

	for (x=0; x<a ; x++) {
		printf("Exemplo: 01 132");
		printf("--> ");
		scanf("%i %i", &n[x] , &alt[x] ) ;
	}
	
	//depois de lido as 10 vezes... vamos buscar

	for (x=0; x<a ; x++) {
		printf("\naluno %d\n", x);
		printf("numero = %d , altura = %d cm \n", n[x], alt[x]);	
		
	}

	printf("\nBuscando... \n");

	for (x=0 ; x<a; x++) {
		if (alt[x] > alt[x+1]) {
			altmaior = alt[x];
			altmenor = alt[x+1];
			maior    = n[x];
			menor    = n[x+1];
		}

		if (alt[x] < alt[x+1]) {
			altmenor = alt[x];
			altmaior = alt[x+1];
			menor	 = n[x];
			maior    = n[x+1];
		}

	}

	printf("\nMaior altura: %d, Menor altura: %d \n", altmaior, altmenor);
	//ta imprimindo o segundo valor como maior... por que?
}


