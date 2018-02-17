#include <stdio.h>
#include <stdlib.h>

//votacao por codigo

//calcular e imprimir coisas...

int voto[7];  //nao vou utilizar o indice zero... por isso coloquei 6+1


int main() {
	int numero;
	
	printf("\nSistema de votação do Requeijao\n");
	printf("numero entre 1 e 4 --> candidato respectivo\n");
	printf("numero 5 --> voto nulo\n");
	printf("numero 6 --> voto em branco\n");

	//existem 4 candidatos...
	//votar 10 vezes

	while (1) {

	printf("\nVOTE COM UM NUMERO\n--> ");
	scanf("%d",&numero);

	//fazer casos para 6 situacoes
	//http://linguagemc.com.br/o-comando-switch-case-em-c/

	switch (numero) {
		case 0 :
			printf("Encerrando votacao...\n\n");
			break;  //parar programa aqui... conserte essa porra
				//conserte isso! nao ta parando o programa!

		case 1 :
			voto[1]++;  //viu? nao comecei de zero.
			break;
		case 2 :
			voto[2]++;
			break;

		case 3 :
			voto[3]++;
			break;

		case 4 :
			voto[4]++;
			break;

		case 5 :
			voto[5]++;  //voto nulo
			break;

		case 6 :
			voto[6]++;  //voto em branco
			break;
	
	}

	if (numero !=0) {		//ajeitar condicional e fazer repetir o processo ate o numero for 0

	//imprimir total de votos para cada canditado
	int x, totalvotos;
	for (x=0 ; x<7 ; x++) {  //canditados 1 a 4... o indice 0 nao tem nada dentro dele
		totalvotos = totalvotos + voto[x];

		//vamos limitar... nao quero imprimir os nulos e branco aqui
		if (x<5) printf("Total de votos para candidato %d : %d \n", x, voto[x]);
	}

	printf("Total de votos: %d\n", totalvotos);

	printf("Total de votos nulos: %d\n", voto[5]);

	printf("Total de votos em branco: %d\n", voto[6]);

	printf("% votos nulos / total = %f\n", (float)((voto[5]/totalvotos)/100));	
	
	printf("% votos em branco / total = %f\n", (float)((voto[6]/totalvotos)/100));

	}

	}  //fim do while aqui
}
