#include <stdio.h>
#include <stdlib.h>

int   hinicial[2], hfinal[2], minutos ;
float dh, dm;

//falta implementar o dia do jogo
//pode ter jogo que comece em um dia e acabe no dia seguinte

int main () {

	while (1) {
		printf("\n\nentre com a hora inicial:\n--> ",   hinicial[0]);
		scanf("%d", &hinicial[0]);
		printf("\n\nentre com o minuto inicial:\n--> ", hinicial[1]);
		scanf("%d", &hinicial[1]);
	
		printf("\n\nentre com a hora final:\n--> ",     hfinal[0]);
		scanf("%d", &hfinal[0]);
	
		printf("\n\nentre com o minuto final:\n--> ",   hfinal[1]);
		scanf("%d", &hfinal[1]);
		
		//converter horas em minutos e somar
		minutos = ( (hfinal[0] - hinicial[0]) * 60 ) ;
		minutos = ( minutos + (hfinal[1] - hinicial[1]) );
		//minutos contem duraçao em minutos
		
		//duracao em horas e minutos
		dh = (minutos / 60);
		dm = (((int)(minutos / 60) * 60) - minutos);
		
		//implementar dia de jogo aqui
		
		if (minutos > (24 * 60)) {
			printf("\n***duração maior que 1 dia***\n");
			break;
		}
		
		//debug
		printf("\nminutos = %d\n", minutos);
		
		printf("\n\nDuracao do jogo: %d horas e %d minutos\n\n", (int)(dh), (int)(dm));
		//formatar esses floats... quero só o algarismo sig.
		
	}
}