#include <stdio.h>
#define LIMITE 25
 
   void lerMatriz(int mat[LIMITE][LIMITE], int m, int n)
   {
        int i, j;
        for (i = 0; i < m; i = i + 1)
            for (j = 0; j < n; j = j + 1) scanf("%d", &mat[i][j]);
    }
   
   void somarMatrizes(int a[LIMITE][LIMITE], int b[LIMITE][LIMITE],
       int c[LIMITE][LIMITE], int m, int n)
  {
       int i, j;
       for (i = 0; i < m; i = i + 1)
           for (j = 0; j < n; j = j + 1) c[i][j] = a[i][j] + b[i][j];
   }
   
  void escreverMatriz(int mat[LIMITE][LIMITE], int m, int n)
   {
       int i, j;
       for (i = 0; i < m; i = i + 1)
       {
           for (j = 0; j < n; j = j + 1) printf("%3d", mat[i][j]);
           printf("\n");
       }
}
 
int main(void)
{
       int m, n, m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
       printf("Informe o tamanho da primeira dimensao das matrizes\n");
       scanf("%d", &m);
       printf("Informe o tamanho da segunda dimensao das matrizes\n");
       scanf("%d", &n);
       if (m < LIMITE && n < LIMITE)
       {
           printf("Informe os elementos da primeira matriz\n");
           lerMatriz(m1, m, n);
           printf("Informe os elementos da segunda matriz\n");
           lerMatriz(m2, m, n);
           printf("\n");
           somarMatrizes(m1, m2, m3, m, n);
           printf("Vejam como vai ficar a soma das matrizes\n");
           escreverMatriz(m3, m, n);
       }
        else printf("Matriz excessivamente grande!\n");
         system("PAUSE");	
         return 0;
  }
  
  
