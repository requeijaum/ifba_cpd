#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char palavra1[] = "Java";
  char palavra2[] = "java";
  
  if(strcmp(palavra1, palavra2) == 0)
    printf("As palavras sao iguais");
  else if(strcmp(palavra1, palavra2) > 0)
    printf("A primeira string e maior que a segunda");
  else if(strcmp(palavra1, palavra2) < 0)
    printf("A segunda string e maior que a primeira");

  puts("\n\n");
  system("PAUSE");
  return 0;
}
