// Si implementi una funzione che calcola la seguente successione fino al termine n-esimo
//a(di n)=1/2 se n=1 altrimenti a(di n)= (a(di n-1)+1) / 2

#include <stdio.h>

float succ(int n)  // funzione successione
{
  float a = 0.5; // valore di a se n=1

  printf("\nSuccesione: \n\n");

  for (int i = 1; i <= n; i ++)
    {
      printf(".a%d : %0.8f\n", i, a);
      
      a = (a + 1) / 2;
    }
  return a;
}


void main()
{
  int n;
  float limite;

  do  // ripete richiesta finchè non si inserisce n > 0
    {
      printf("Inserire n ( > 0) : ");
      scanf("%d", &n);

    } while (n < 1);
  
  limite=succ(n);

  printf("\nIl limite della successione è %0.0f   (arrotondato a 0 decimali)\n", limite);
}