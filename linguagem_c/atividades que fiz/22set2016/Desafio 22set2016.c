/* DESAFIO */

//Pegar o código abaixo e criar:
//IMPRIMIR ALUNO
//PESQUISAR ALUNO PELO CODIGO 
//(PODE USAR OU NAO UMA FUNCAO OU PROCEDIMENTO)


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
	
int  QTDE = 5 ;  //teste ... mudar pra 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct _Aluno {
	char nome[20];					//primeiroNome
	int codigo, matricula;     //codigo = 100... matricula=2016...
	
}; 
	
struct _Aluno vetorAluno[5];


void cadastrar(){
	int x;
	for (x=0; x< QTDE; x++) 
		
		{
			printf("Digite o nome do aluno\n");
			scanf("%s", &vetorAluno[x].nome);
		    fflush(stdin);
		
		    printf("Digite a matricula do aluno\n");
			scanf("%d", &vetorAluno[x].matricula);		
		    fflush(stdin);
		
		    printf("Digite o codigo do aluno\n");
			scanf("%d", &vetorAluno[x].codigo);				
			fflush(stdin); 
		}
	
	}

void imprimirAlunos(){
	printf("Alunos cadastrados:");
	
	int a;
	for (a=0 ; a < QTDE ; a++ ){
		printf("\n %s",          vetorAluno[a].nome);   
		printf(" matricula: %d", vetorAluno[a].matricula);
		printf(" cod: %d",       vetorAluno[a].codigo);
	}
}

void pesquisar(){
	
	//a partir do código
	int tempcod;
	printf("\nDigite o codigo do aluno desejado:\n");
	printf("--> ");
	scanf ("%d", &tempcod);
	fflush(stdin);
	
	int y;	
	for (y=0; y< QTDE; y++) {
		if (vetorAluno[y].codigo == tempcod) {
			printf("\n %s",          vetorAluno[y].nome);   
			printf(" matricula: %d", vetorAluno[y].matricula);
			
		}
	}
	
}


int main() {

//CADASTRAR ALUNOS
	cadastrar();
	imprimirAlunos();
	pesquisar();				
	
}
