#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Aluno {
	int codigodoaluno;
	char nomealuno[20], matricula[10];
}; 

struct Aluno vetorAluno[5];
int x;

int main(int argc, char *argv[]) {
	
for (x=0; x<5; x++)
	{
		printf("Digite o nome do aluno\n");
		scanf("%s", &vetorAluno[x].nomealuno);
        fflush(stdin);

        printf("Digite a matrícula do aluno\n");
		scanf("%s", &vetorAluno[x].matricula);		
        fflush(stdin);

        printf("Digite  codigo do aluno\n");
		scanf("%d", &vetorAluno[x].codigodoaluno);				
		fflush(stdin); 
	}
	
	
	
	
	return 0;
}
