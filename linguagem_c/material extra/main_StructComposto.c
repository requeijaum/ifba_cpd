#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
	struct dtnasc 
		{
			int dia, mes, ano;
		};
    
    struct cliente 
{
		int codcli;
		char nome[30];
		char tel[15];
	    struct dtnasc datanascimento;
};

struct cliente c1 ;
struct cliente vetorcliente[10];
int x;
 
int main(int argc, char *argv[])
{
       // clrscr( );
		
		for (x=1; x<=10; x++)
		{
			
			vetorcliente[x].codcli;
			vetorcliente[x].nome;
			vetorcliente[x].tel;
			vetorcliente[x].datanascimento.ano;
			vetorcliente[x].datanascimento.dia;
			vetorcliente[x].datanascimento.mes;
			
			
		}
		
		printf ("\n Código do Cliente:");
		scanf("%d*d", &c1.codcli);
		printf ("\n Nome:");
		gets(c1.nome);
		printf ("\n Telefone:");
		gets(c1.tel);
		printf ("\n Data de nascimento:");
		scanf("%d*d", &c1.datanascimento.dia);
        //, &c1.dtnasc.mes, &c1.dtnasc.ano);
//	clrscr( );
	printf("Pressione uma tecla para continuar...");
	getch( );
  system("PAUSE");	
  return 0;
}
