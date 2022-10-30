// Dato un numero vogliamo stabilire se sia primo oppure no
// Si crei inoltre un programma che testi la funzione per i valori di input da 1 a 100 (incluso). Il programma deve stabilire il numero di numeri primi trovati nell'intervallo

#include <stdio.h>

int testprimo(int n)  // restituisce 2 se è primo, in generale restituisce il numero dei divisori
{
  if (n == 1)
  {
    return 2;
  }
  
  int aus = 0;

  // ciclo per controllare il numero di divisori di aus
  for (int i = 1; i <= n; i ++)
    {
      if ( (n % i) == 0 )
        aus = aus + 1;
    }
  
  return aus;
}


void main()
{
  int n;  // valore da inserire

  do  //input n>0
    {
      printf("\nInserire numero : ");
      scanf("%d", &n);
      
    } while (n < 0);

  if (testprimo(n) == 2 )
  {
    printf("\nE' un numero primo.\n");
  }
   else
    printf("\nNon è un numero primo.\n");

  // controllo se il valore inserito è <= 100
  if (n <= 100)
  {
    int nprimi=0;

    printf("\nNumeri primi da 1 a %d : \n", n);

    // ciclo per trovare i numeri primi da 1 a n
    for (int i = 1; i <= n; i ++)
      {
        if (testprimo(i) == 2)
        {
          nprimi = nprimi + 1;
          printf("%d ", i);
        }
      }

    printf("\n\nIn totale : %d", nprimi);
  }
  
}
