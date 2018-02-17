#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct cadastro
{ char nome[10];
  int rg;
  char sexo;
};
struct cadastro cadastroaluno[3];

//int buscarAluno (int rgb, struct cadastro vetor)
int buscarAluno (int rgb)
{
    int x;
   for(x=0;x<3;x++)
   { 
      if(rgb==cadastroaluno[x].rg)
      {
          return x;                            
      }           
   }
   return -1;

    
}


int main(int argc, char *argv[])
{
    
    int k, buscar, rg2, rg3;
    for (k=0;k<3;k++)
    {
    //getchar();
    printf("Informe o rg\n");
    fflush(stdin);
    scanf("%d", &cadastroaluno[k].rg);
    clrscr();
    buscar = buscarAluno(cadastroaluno[k].rg); 
    if (k>0)
{
    while (buscar!=-1)
    {
       printf("Digite novamente o RG, pois ja existe");
       fflush(stdin);
       scanf("%d", &rg3);
       buscar = buscarAluno(rg3);
       if (buscar==-1)
           cadastroaluno[k].rg= rg3;
    }
}   
    
    printf("Informe o nome\n");
    fflush(stdin);
    scanf("%s*%c", &cadastroaluno[k].nome);
    printf("Informe o sexo\n");
    fflush(stdin);
    scanf("%s",&cadastroaluno[k].sexo);
    //getchar();
}
   printf("Informe um rg para pesquisar\n");
   scanf("%d", &rg2);
   buscar=buscarAluno(rg2);
   if (buscar!=-1)
   {
    printf("RG ENCONTRADO NA POSICAO%d\n ALUNO%s\n", buscar, cadastroaluno[buscar].nome);
   }
   else
   {
       printf("RG NAO ENCONTRADO");
   }
   
  system("PAUSE");	
  return 0;
}
