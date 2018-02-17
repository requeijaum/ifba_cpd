// Desafio: alunos: Rafael Requião, Victor Hugo e Lucas Nascimento

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  z=5 ;

struct registro {
	char nome[20];					//primeiroNome
	int codigo, matricula;     //codigo = 100... matricula=2016...
}; 
	
struct registro aluno[5];

void cadastrar() {
	int x;
	for (x=0; x< z; x++) {
			printf("Digite o nome do aluno\n");
			scanf("%s", &aluno[x].nome);
		    fflush(stdin);
		
		    printf("Digite a matricula do aluno\n");
			scanf("%d", &aluno[x].matricula);		
		    fflush(stdin);
		
		    printf("Digite o codigo do aluno\n");
			scanf("%d", &aluno[x].codigo);				
			fflush(stdin); 
		}
	
	}

void imprimir(){
	printf("Alunos cadastrados:");
	
	int a;
	for (a=0 ; a < z ; a++ ){
		printf("\n %s",          aluno[a].nome);   
		printf(" matricula: %d", aluno[a].matricula);
		printf(" cod: %d",       aluno[a].codigo);
	}
}

void pesquisar(){
	
	//a partir do código
	int u;
	printf("\nDigite o codigo:\n");
	printf("--> ");
	scanf ("%d", &u);
	fflush(stdin);
	
	int y;	
	for (y=0; y< z; y++) {
		if (aluno[y].codigo == u) {
			printf("\n %s",          aluno[y].nome);   
			printf(" matricula: %d", aluno[y].matricula);
			
		}
	}
	
}


int main() {
	
	cadastrar();
	imprimir();
	pesquisar();
					
}
