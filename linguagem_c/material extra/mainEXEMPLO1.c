#include <stdio.h>
#include <stdlib.h>
struct Endereco
{
char logradouro[20], complemento[20], estado[2],municipio[20];
int numero;
};
struct funcionario
{
char nome[100], cpf[14], rg[14], sexo[1];
struct Endereco EnderecoCompleto;       
};

struct funcionario  FUNC;
int main(int argc, char *argv[])
{
  printf("Informe o nome do funcionario\n");
  scanf("%s", &FUNC.nome);
  fflush ( stdin );
  printf("Informe o cpf do funcionario\n");
  scanf("%c", &FUNC.cpf);
  fflush ( stdin );
  printf("Informe o rg do funcionario\n");
  scanf("%c", &FUNC.rg);
  fflush ( stdin );
  printf("Informe o sexo do funcionario\n");
  scanf("%c", &FUNC.sexo);
  fflush ( stdin );
  printf("Informe o logradouro do funcionario\n");
  scanf("%c", &FUNC.EnderecoCompleto.logradouro);
  fflush ( stdin );
  printf("Informe o numero do funcionario\n");
  scanf("%d", &FUNC.EnderecoCompleto.numero);
  fflush ( stdin ); 
  printf("Informe o complemento do funcionario\n");
  scanf("%c", &FUNC.EnderecoCompleto.complemento); 
  fflush ( stdin );
  printf("Informe o estado do funcionario\n");
  scanf("%c", &FUNC.EnderecoCompleto.estado);
  fflush ( stdin );  
  printf("Informe o municipio do funcionario\n");
  scanf("%c", &FUNC.EnderecoCompleto.municipio);
  fflush ( stdin );
  
  puts(FUNC.nome);
  //printf("o nome e %s\n, o cpf e %s\n, o rg e %c\n, o sexo e %c\n, o logradouro e %c\n, o numero e %d\n, o complemento e %c\n, o estado e %c\n, o municipio e %c\n", FUNC.nome, FUNC.cpf, FUNC.rg, FUNC.sexo, FUNC.EnderecoCompleto.logradouro, FUNC.EnderecoCompleto.numero, FUNC.EnderecoCompleto.complemento, FUNC.EnderecoCompleto.estado, FUNC.EnderecoCompleto.municipio);
  printf("o nome e %s\n", FUNC.nome);
  
    
  system("PAUSE");	
  return 0;
}
