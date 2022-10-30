// Dati due interi positivi n e k da tastiera, calcolare il coefficiente binomiale di n su k

#include <stdio.h>

 int fattoriale (int x) // restituisce fattoriale di x
{
  int aus =1;
  for (int i = x; i > 0; i--)
    {
      aus = aus * i;
    }

  return aus;
}

void main()
{
  int n, k;
  int coeff;

  do  // ciclo per controllo input n>0 e k>0
    {
      printf("Inserire n ( > 0 ) : ");
      scanf("%d", &n);

      printf("\nInserire k ( > 0 ) : ");
      scanf("%d", &k);

      if ( (n <=0) || (k <= 0) )
      {
        printf("\n Errore inserimento!\nInserire n>0 e k>0.\nRiprovare\n\n");
      }  
      
    } while ( (n <= 0)  || (k <= 0));

  if (n < k)
  { 
    coeff = 0;
  }
  else 
  {
    coeff = fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
  } 

  printf("\n\nCoefficiente binomiale di %d su %d è : %d\n", n, k, coeff);

}

