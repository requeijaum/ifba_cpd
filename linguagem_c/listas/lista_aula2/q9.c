#include <stdio.h>
#include <stdlib.h>

//q9 lista2

int AM, FM, a, b;


int main() {
	printf("\n\nLeia número AM:\n--> ");
	scanf("%d", &AM);
	printf("\n\nLeia número FM:\n--> ");
	scanf("%d", &FM);

	a = AM ; b = FM ;
	
	FM = AM;
	AM = b;
	
	printf("\nAntes : AM = %d   FM = %d\n", a, b);

	printf("\nDepois: AM = %d   FM = %d\n", AM, FM);

}