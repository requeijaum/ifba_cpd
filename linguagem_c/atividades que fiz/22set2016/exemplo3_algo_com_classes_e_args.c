#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//EXEMPLO 3 - algo com argumentos

	//Este � um m�todo semelhante a 'funcao'
	int soma(int *a, int *b)
	{
		int c = *a + *b;
		return c;
	}
	
	//Este � um m�todo semelhante a 'procedure'
	void mudarNome(char primeiroNome[])
	{
		char segundoNome[] = " da silva";
		/* alterei o atributo primeiroNome colocando um sobrenome qualquer
		 * o tipo de retorno � 'void', entao o metodo nao retorna nada		
		*/
		//char nomecompleto[];
		strcat(primeiroNome, segundoNome);
		printf(primeiroNome,"\n");
	
	}
	
	void main()
	{
		int a = 10;
		int b = 20;
		int c = soma(&a,&b);  //o valor de 'c' agora � a soma de 'a' + 'b' = 30
		printf("A soma de a + b = %d" , c);
		printf("\n");
		
		
		//vai se tornar vari�vel global... t� de saco cheio
		//primeiroNome[] = "Lula";
		char primeiroNome[] = "Lula";
		mudarNome(&primeiroNome);	
	}
	
	

