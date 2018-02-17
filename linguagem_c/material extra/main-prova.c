#include <stdio.h>
#include <stdlib.h>


void main () {

     int **matriz;   /* ponteiro para os ponteiros de cada uma das linhas */ 
     int lin, col;   /* número de linhas e colunas */ 
     int i, j; 
     int linha1, linha2; /* linhas da matriz que serao trocadas */ 
     char linha[80]; /* linha de caracteres com os dados */ 
     int *temp;

     do { 
        puts("Qual o numero de linhas?"); 
        gets(linha); 
        lin = atoi(linha); 
     } while (lin<=0); 
     printf("Numero de linhas = %d\n", lin); 
     printf("Alocando espaço para armazenar os ponteiros para as linhas.\n"); 
     matriz = (int **) malloc (lin * sizeof(int *)); 
     if (!matriz) { 
        puts("Nao há espaço para alocar memória"); 
        exit(1); 
     }

     do { 
        puts("Qual o numero de colunas?"); 
        gets(linha); 
        col = atoi(linha); 
     } while (col<=0); 
     printf("Numero de colunas = %d\n", lin); 
     printf("Alocando espaço para armazenar os vetores de linhas.\n"); 
     for (i=0; i<lin; i++) 
     { 
        *(matriz +i) = (int *) malloc(col * sizeof (int)); 
        if (! *(matriz+i) ){ 
           printf("Não há espaço para alocar a linha %d", i); 
           exit(1); 
        } 
     } 
     puts("Entre com os dados"); 
     for (i=0; i<lin; i++) 
     { 
        printf("Entre com a linha %d\n", i); 
        for (j=0; j<col; j++) 
        { 
            printf("Elemento %d %d\n", i, j); 
            scanf("%d", *(matriz +i) +j); 
        } 
     } 
     puts("Dados lidos"); 
     for (i=0; i<lin; i++) 
     { 
        for (j=0; j<col; j++) 
        { 
            printf("%7d ", *(*(matriz +i) +j)); 
        } 
        printf("\n"); 
     } 
     getchar();

     do { 
        puts("Qual a primeira linha a ser trocada?"); 
        gets(linha); 
        linha1=atoi(linha); 
     } while (linha1 >=lin);

     do { 
        puts("Qual a segunda linha a ser trocada?"); 
        gets(linha); 
        linha2=atoi(linha); 
     } while (linha2 >=lin); 
  
     temp = *(matriz + linha1); 
     *(matriz + linha1) = *(matriz + linha2); 
     *(matriz + linha2) = temp; 
  
     puts("Dados trocados."); 
     for (i=0; i<lin; i++) 
     { 
        for (j=0; j<col; j++) 
        { 
            printf("%7d ", *(*(matriz +i) +j)); 
        } 
        printf("\n"); 
     }

} 
