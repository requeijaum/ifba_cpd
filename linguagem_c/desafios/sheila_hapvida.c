//Rafael Requiao @ 16fev2018
//Questao que Karen enviou
//Nao usar acentos - pode cagar por conta da codificacao errada do texto

//includes gerais do C para Terminal de Texto

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//includes pra Windows
//#include <windows.h>


/* 	Sheila eh cliente de um plano de saude com coparticipacao. 
	Isso significa que além do mensalidade paga todos os meses,
	ela pode precisar pagar uma taxa extra pelos procedimentos que fizer.

	total = mensalidade + taxa

	O plano que ela escolheu da direito a
	2 exames e 3 consultas - por ano - dentro de um periodo de 12 meses

	Passando disso, cobre 40% do valor de cada exame e 70% de cada consulta.

	SE # de exames > 2 :

	total = mensalidade + taxa + (0.4 * #_de_exames_extras)	


	SE # de consultas > 3:

	total = mensalidade + taxa + (0.7 * #_de_consultas_extras)


	SE # de consultas e exames excederem...

	total = mensalidade + taxa + (0.4 * #_de_exames_extras) + (0.7 * #_de_consultas_extras)

	
	SIMPLIFICANDO...

	total = mensalidade + taxa + excedente


	O excedente eh calculado apos avaliar o numero de procedimentos realizados.

------------

	Escreva um programa que receba como entrada dos dados...
	tipo e valor - de 8 procedimentos feitos por ela esse ano...
	
	e exiba o valor total que ela teve que desembolsar para completar
	o que foi pago pelo plano

	-> o plano paga um total de 2 exames e 3 consultas

	-> precisamos programar o valor de um exame e uma consulta?
	-> nao - o programa deve permitir entrar valor

	-> depois mostrar o valor que ainda deve ser pago, em caso de excedentes

--------

	FORMATO DE ENTRADA - uma string (exame ou consulta) e um valor Real (float)

	FORMATO DE SAIDA - um valor real com duas casas decimais - float em .2f



*/



//variaveis e estruturas globais aqui

int i, n;
const float 	mensalidade 	= 1000.00;
const float 	taxa 		= 0.20;

char 	procedimento[32];
float 	valor_procedimento;

const char exame[] 		= "exame";
const char consulta[] 	= "consulta";
const char debug[]		= "--debug";


//mostrar mensagens de debugging
int  n_arg;
char v_arg[10];	


struct 	Conta {

		//predefinir abaixo os valores de mensalidade e taxa
		//declarei como constante para proteger contra escrita

		float	total;	

		int 		n_exames;  	
		int 		n_consultas;

		float	valor_excedente_exames;
		float	valor_excedente_consultas;

} conta ; 





//CLANG do Mac reclama que main() precisa estar depois das outras funcoes


//declarar funcoes auxiliares

void msg_debug(char texto[], float numero){

	if (strcmp(v_arg, debug) == 0)  {

		printf("\n  [DEBUG] ");		
		printf("%s", texto);
		if (numero >= 0) printf("%.2f", numero);
		printf("\n");

	}
}


void calcular_procedimento(){  

	
	msg_debug("Iniciando registro #", i);

	//lembre-se que "i" eh variavel global

	//pegar entrada do usuario
	printf("\n\n  Digite o tipo de procedimento realizado e o valor.");
	printf("\n\n  Exemplos: \"exame 666.66\" ou \"consulta 123.45\"\n    --> ");

	scanf("%s %f", procedimento, &valor_procedimento);

	msg_debug("procedimento =", -1);
	msg_debug(procedimento , -1);

	//computar o procedimento

	//incrementar numero de procedimentos realizados - exame ou consulta
	//usar variavel global - nah... estrutura eh melhor
	//descontar, de acordo com as regras do plano
	//incrementar contador de chamadas da funcao... n incrementar em caso de falha

	
	if ( strcmp(procedimento, exame) == 0 ){
		
		msg_debug("procedimento -> exame!", -1);
		conta.n_exames++;

		//desconta na hora
		if(conta.n_exames < 3){
			valor_procedimento -= valor_procedimento; 		
		}

		conta.valor_excedente_exames += valor_procedimento;

		i++;


	}

	else

	if ( strcmp(procedimento, consulta) == 0 ){
		
		msg_debug("procedimento -> consulta!", -1);
		conta.n_consultas++;

		//desconta na hora
		if(conta.n_consultas < 4){
			valor_procedimento -= valor_procedimento; 		
		}

		conta.valor_excedente_consultas += valor_procedimento;

		i++;

	} 

	else {
		printf("\n     OPCAO INVALIDA\n"); 
	}


	msg_debug("Valores respectivos de exames e consultas ->", -1);
	msg_debug("", conta.valor_excedente_exames);
	msg_debug("", conta.valor_excedente_consultas);



	//limpar bagunca

	valor_procedimento = 0;
	strcpy(procedimento, "\0");  	//nular variavel procedimento
	msg_debug("procedimento = ", -1);
	msg_debug(procedimento, -1);	


}

void calcular_total(){

	//calcular total com mensalidade e taxa
	conta.total = mensalidade + (mensalidade * taxa);


	//calcular valor excedente total
	conta.total += conta.valor_excedente_exames + conta.valor_excedente_consultas;

}

void mostrar_conta(void){

	msg_debug("conta.n_exames = "						, conta.n_exames);
	msg_debug("conta.valor_excedente_exames = "			, conta.valor_excedente_exames);
	msg_debug("conta.n_consultas = "						, conta.n_consultas);
	msg_debug("conta.valor_excedente_consultas = "		, conta.valor_excedente_consultas);
	msg_debug("mensalidade = " 							, mensalidade);
	msg_debug("taxa = "									, taxa);
	msg_debug("conta.total = " 							, conta.total);


	//FORMATO DE SAIDA - um valor real com duas casas decimais - float em .2f
	printf("\n\n    O total da conta eh de: %.2f    \n\n", conta.total);
	

}


//declarar funcao principal

int main(int argc, char *argv[]){

	//condicional pra mostrar msg_debug()
	n_arg = argc;
	if (n_arg >= 2)	strcpy(v_arg , argv[1]);
	
	//printf("%d %s", n_arg, v_arg);

	printf("\n\n*** PROGRAMA DA SHEILA DO PLANO DE SAUDE FULEIRO ***\n\n");

	//declarar estrutura
	struct Conta conta ;

	//limpar campos da estrutura - so pra ter certeza

	conta.total = conta.n_exames = conta.n_consultas = 0;
	conta.valor_excedente_exames = 0;
	conta.valor_excedente_consultas = 0;


	msg_debug("Zerei a estrutura \"conta\"!", -1);

	//criar um loop para chamar a funcao 8 vezes
	
	do {
		calcular_procedimento();
	} while (i < 8);

	//outras funcoes
	calcular_total();
	mostrar_conta();

	//retornar algo
	//CLANG do macOS 10.11 reclama de "revious implicit declaration is here"
	return 0;
}

