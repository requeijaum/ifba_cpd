#include <stdio.h>

//escrever todos os numeros pares compreendidos entre 10 ate 20
//utilizaremos 3 estruturas... dividirei em funcoes

void paravariando(){
	printf("\nPara... variando\n");
	int i;
	for (i=10; i<21 ; i++) {
		if (i % 2 == 0) {
			printf("\n%d\n", i);
		}
	}

}

void repitaate() {
	printf("\nRepita... ate\n");
	//nao entendi como fazer em C	
}

void enquantofaca () {
	int i=10;
	do {
		i++;
		if (i % 2 == 0) {
                        printf("\n%d\n", i);
                }

	} while (i<21);
}



void main(){
	
	printf("\nUtilizaremos 3 estruturas de repeticao...\n");
	paravariando();
	repitaate();
	enquantofaca();	
}
