#include <stdio.h>
#include <stdlib.h>

//não funciona... ver o que é depois

char car;
int  vogal;

int main() {
	do {
		printf("\n\nentre com a letra:\n");
		scanf("%s", &car);
	
		switch (car) {
			case 'a' :   vogal = 1;     break;
			case 'e' :   vogal = 1;     break;
			case 'i' :   vogal = 1;     break;
			case 'o' :   vogal = 1;     break;
			case 'u' :   vogal = 1;     break;
			default  :   vogal = 2; 	break;
		
		}
		
		if (vogal = 1) printf("\nA letra é uma vogal!\n");
		if (vogal = 2) printf("\nA letra é uma consoante!\n");
	
	} while (car == 0);

}