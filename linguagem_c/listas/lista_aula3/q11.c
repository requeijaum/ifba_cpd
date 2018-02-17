/*
11. Faça uma Programa que receba a idade e o estado civil(C - casado, S - solteiro, V - viúvo e D 
desquitado ou separado) de 20 pessoas. Calcule e imprima:  
• a quantidade de pessoas casadas;  
• a quantidade de pessoas solteiras;  
• a média das idades das pessoas viúvas;  
• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas analisadas. 30) 

*/


#include <stdio.h>
#include <stdlib.h>

struct _pessoa {
	char   estadocivil;   //V ou P - maiusculo... pq eu quero
	int    idade;

};

struct _pessoa pessoa[20];
int x , casados, solteiros , viuvos , divorciados , idadetotal;
int idadeviuvos, midviuvos, percen;


int main () {
	//entrar com dados
	int a = 5;   //idade teste mudar para 20
	
	for (x=0; x<a; x++) {
		printf("\n *** essa é o pessoa #%d ***", x);
		//implementar restrição no idade do código
		
		
		printf("\nEntrar com o código do pessoa ( C, S, V ou D):");
		printf("\n--> ");
		scanf ("%s", &pessoa[x].estadocivil);
		//tenho que dar um flush de scanf?
		//verificar isso depois...
		fflush(stdin);

		/* 
		if (&pessoa[x].estadocivil =/= ('C' || 'S' || 'V' || 'D')) {
			x--;
			printf("Código não encontrado... digite novamente");
			passar1=0;
		}
		
		if (passar1 =/= 0) {
		*/
		
		printf("\nEntrar com o idade do pessoa (valores inteiros):");
		printf("\n--> ");
		scanf ("%d", &pessoa[x].idade);
		fflush(stdin);
		
		// }
	}
	
	
	//calcular idadees
	
	for (x=0; x<a; x++) {
		if (pessoa[x].estadocivil == 'C') { 
			casados++;
		}
		
		if (pessoa[x].estadocivil == 'S') {
			solteiros++;
		}
		
		if (pessoa[x].estadocivil == 'V') {
			viuvos++;
			idadeviuvos = idadeviuvos + pessoa[x].idade ; 
		}

		if (pessoa[x].estadocivil == 'D') {
			divorciados++;
		}

	
	}

	//media idade viuvos
	midviuvos = idadeviuvos / viuvos ;
	
	//% de pessoas divorciadas entre todas as pessoas
	percen = ((divorciados / a) / 100) ;

	//imprimir coisas
	printf("\n\n***RESULTADOS***\n========================");
	printf("\nQtde. pessoas casadas:                 %d", casados);
	printf("\nQtde. pessoas solteiras:               %d", solteiros);
	printf("\nMédia idade pessoas viúvas:            %d", midviuvos);
	printf("\nPercentagem de pessoas divorciadas:    %d\n\n", percen);
	
	
}	