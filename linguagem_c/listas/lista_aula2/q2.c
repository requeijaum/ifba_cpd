#include <stdio.h>
#include <stdlib.h>

int n1, n2;

int main(){
	printf("\n\nentre com o primeiro numero\n--> ");
	scanf("%d", &n1);
	
	printf("\n\nentre com o segundo numero\n--> ");
	scanf("%d", &n2);
	
	if (n1 > n2) printf("\no primeiro numero é maior que o segundo\n\n");
	if (n1 < n2) printf("\no segundo numero é maior que o primeiro\n\n");
	
}
