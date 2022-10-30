// calcolo media aritmetica di una serie di numeri

#include <stdio.h>

void main()
{
  int i = 0;  // numero totali dei valori inseriti
  float somma = 0; // conterrà la somma dei valori inseriti
  int x;  //per lettura valore inserito

  do
    {
      i=i+1;
      printf("Inserisci un numero (x_%d) : ", i);  
      scanf("%d", &x);  // legge numero i-esimo
      somma = somma + x;  // somma tutti i valori inseriti
      
    } while ( x != 0 );  //ciclo si ferma quando si inserisce 0

  if ( i == 1)  // se sono stati inseriti 0 valori
  {
    printf("\n\nNon sono stati inseriti valori utili.");
  }
   else 
  
    printf("\n\nLa media aritmetica dei %d valori inseriti è : %.2f", (i - 1), ( somma / ( i - 1 ) ) );
    // media di i-1 valori (escludiamo l'inserimento del valore 0) , media = somma dei valori inseriti / n. valori inseriti. stampa fino a due decimali (%0.2f)
  
}