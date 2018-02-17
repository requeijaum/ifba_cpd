#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

int main() 
{ 

char vetorg1[1] [4]={'b'}; 
char vetorg2[1] [4]={'a'}; 
char vetorg3[1] [4]={'a'}; 
char vetorg4[1] [4]={'e'}; 
char vetorg5[1] [4]={'c'}; 
char resposta [2] [5]; 
int i,j; 

for(i=0;i<2;i++) 
{ 
for(j=0;j<5;j++) 
{ 

printf("aluno [%d] informe as suas resposta:",i+1); 
printf("Questao %d:\n",j+1); 
printf("t--->"); 
scanf("%c",&resposta[i][j]); 
if(resposta[i][j]==vetorg1[i][j])
{ 
printf("resposta certa!\n"); 
} 
else 
{ 
printf("resposta errada!\n"); 
} 
getchar(); 
} 

} 

system("pause"); 
return 0; 
}
