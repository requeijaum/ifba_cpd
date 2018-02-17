/*
12. Faça uma Programa que receba a idade, o peso e o sexo de 10 pessoas. Calcule e impnma:  
• total de homens;  
• total de mulheres;  
• média das idades dos homens;  
• média dos pesos das mulheres. 
*/

#include <stdio.h>
#include <stdlib.h>

struct _pessoa {
	int  idade, peso;
	char sexo;

};

struct _pessoa pessoa[10];
int    x, homens, mulheres, midhomens, mpmulheres, peso, idhomens;

int main() {

	//entrar com dados
	int a = 5;   //idade teste mudar para 20
	
	for (x=0; x<a; x++) {
	
		printf("\n *** essa é o pessoa #%d ***", x);
		
		printf("\nEntrar com o sexo da pessoa ( M ou F ):");
		printf("\n--> ");
		scanf ("%s", &pessoa[x].sexo);
		fflush(stdin);

		printf("\nEntrar com o idade da pessoa (valores inteiros):");
		printf("\n--> ");
		scanf ("%d", &pessoa[x].idade);
		fflush(stdin);
		
		printf("\nEntrar com o peso da pessoa (valores inteiros):");
		printf("\n--> ");
		scanf ("%d", &pessoa[x].peso);
		fflush(stdin);
		
	}
	
	for (x=0; x<a; x++) {
		if (pessoa[x].sexo == 'M') { 
			homens++;
			idhomens = idhomens + pessoa[x].idade;
		}
		
		if (pessoa[x].sexo == 'F') {
			mulheres++;
			peso = peso + pessoa[x].peso;
		}	
	}
	
	midhomens  = idhomens / a ; 
	mpmulheres = peso    / mulheres;
	
	
	//imprimir coisas
	printf("\n\n***RESULTADOS***\n========================");
	printf("\nTotal de homens:                       %d", homens);
	printf("\nQtde. pessoas solteiras:               %d", mulheres);
	printf("\nMédia idade homens:                    %d", midhomens);
	printf("\nMédia peso mulheres                    %d\n\n", mpmulheres);
	

}
