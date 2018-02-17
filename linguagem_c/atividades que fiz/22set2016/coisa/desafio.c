/* DESAFIO */

//Pegar o código abaiqo e criar:
//IMPRIMIR ALUNO
//PESQUISAR ALUNO PELO CODIGO 
//(PODE USAR OU NAO UMA FUNCAO OU PROCEDIMENTO)


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int  QTDE = 5 , a , q , w, temp ;  

/* run this program using the console pauser or add wour own getch, swstem("pause") or input loop */

struct Aluno {
char nome[20];				
int codigo, matricula;	
}; 

struct Aluno vetorAluno[5];


void cadastroAlunos(){
		
		for (q=0; q< QTDE; q++) 
			
			{
				printf("Digite o nome do aluno: ");
				scanf("%s", &vetorAluno[q].nome);
			    fflush(stdin);
			
			    printf("Digite a matricula do aluno: ");
				scanf("%d", &vetorAluno[q].matricula);		
			    fflush(stdin);
			
			    printf("Digite o codigo do aluno: ");
				scanf("%d", &vetorAluno[q].codigo);				
				fflush(stdin); 
			}
		
		}
		
		void imprimirAlunos(){
			printf("Alunos: ");
		
		
			for (a=0 ; a < QTDE ; a++ ){
				printf("\n");
				printf("%s",          vetorAluno[a].nome);   
				printf(" matricula: %d", vetorAluno[a].matricula);
				printf(" cod: %d",       vetorAluno[a].codigo);
			}
		}
		
		void pesquisaAlunos(){
		
			printf("\nDigite o codigo do aluno desejado:\n");
			scanf ("%d", &temp);
			fflush(stdin);
		
		for (w=0; w < QTDE; w++) {
				if (temp == vetorAluno[w].codigo) {
					printf("\n");
					printf("%s", vetorAluno[w].nome);   
					printf(" matricula:%d", vetorAluno[w].matricula);
					printf("\n");
				}
		}
		
		}
		
		
		int main() {
			//usar funções
			
			cadastroAlunos();
			imprimirAlunos();
			pesquisaAlunos();				
			
		}

