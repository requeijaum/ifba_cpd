#include <stdio.h>
#include <stdlib.h>

//foi feita uma estatistica com 5 cidades brasileiras
//obtivemos: 	codigo da cidade, 
//		numero de veiculos de passeio e 
//		numero de acidentes de transito com vitimas

//data dos dados obtidos: 1999

//deseja-se saber:	qual maior e menor indice de acidentes. e a que cidades pertencem?
//			qual a media de veiculos nas 5 cidades juntas? (media aritmetica)
//			qual a media de acidentes nas cidades com menos de 2000 veiculos?

//vou entrar com as cidades... nao quero ficar dando scanf.

//CidadeX com cod. , num. veiculos , num acidentes c/ vitm.
//eu tinha criado vetores diferentes pra cada coisa... vamos tentar com uma matriz
//vou acabar usando atoi() e strtoi()


static char cidade[4][5] =  {	{"Salvador","71","3000000","204800"}   ,
				{"Sao Paulo","11","50000000","3000000"} ,
				{"Rio de Janeiro","21","25500000","2300000"} ,
				{"Feira de Santana","75","8919823","123000" }  ,
				{"Itarantim","73","1000","300"}
	        	     };

//o compilador tá reclando de elementos em excesso...
//vou dar uma enxugada depois...
//reclamou de strings inicializadoras tambem... porra!



int main() {

	//teste
	int x,y;
	for (x=0; x<6; x++) {
		for (y=0 ; y<5 ; y++) {
			printf("%s",  cidade[x][0]);
			printf("%d", cidade[x][y]);
		}	
	}
	
}
