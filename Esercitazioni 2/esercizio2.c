// Dati due interi positivi n e k da tastiera, calcolare la sommatoria S(n,k)=Sommatoria per i=1 a n di k^i

#include <stdio.h>

void main()
{
  int n,k;

  do // ripete ciclo finchè non verrano inseriti due valori positivi
    {
      printf("Inserire n (>0): ");
      scanf("%d", &n);
      
      printf("\nInserire k (>0): ");
      scanf("%d", &k);

      if ( (n < 1) || (k < 1) )
        printf("\nValori non inseriti correttamente! Inserire valori maggiori di 0.\n\n");
      
    } while ( (n < 1) || (k < 1) );

  int somma = 0;
  
  for (int i=1; i <= n; i++)  // somma n-sima di potenze di k alla j
    {
      int pot = 1;
      
      for (int j=1; j <= i; j++)  // potenza di k alla j
        pot=pot*k;

      somma = somma + pot;
    }
    
  printf("\nRisultato sommatoria : %d", somma);
    
}