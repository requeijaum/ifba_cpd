#include <stdio.h>
#include <stdlib.h>

float  saldo, temp;
int    flag;

//testar com calma depois

int main () {
	while (1) {
		printf("\n\nEntre com o saldo:\n--> ");
		scanf("%f", &saldo);
	
		//ta sacaneando... vou copiar o valor pra outra var
		temp = saldo;
		flag = 1;
		
		if ((saldo > 400) && (flag=1)) {
			saldo = (temp * 0.30);
			flag  = 0;
		
		}
		
		if ((saldo > 300) && (saldo <= 400) && (flag=1)) {
			saldo = (temp * 0.25);
			flag  = 0;
		
		}	

		
		if ((saldo > 200) && (saldo <= 300) && (flag=1)) {
			saldo = (temp * 0.20);
			flag  = 0;
		
		}	
		
				
		if ((saldo <= 200) && (flag=1)) {
			saldo = (temp * 0.10);
			flag  = 0;
		
		}	
		
		printf("\n\nSALDO FINAL:   %f\n\n", saldo);
		flag = 1;

	} 


}