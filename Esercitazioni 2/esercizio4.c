//letto un intero positivo n da tastiera stampare tutta la successione di Fibonacci fino all'elemento n-esimo compreso 

#include <stdio.h>

void main()
{
  int n;
  do
    {
      printf("Inserire n ( > 0 ): ");
      scanf("%d", &n);
      
    } while (n < 1); // ripete fintantochè n<1

  printf("\n\nSuccessione di Fibonacci fino al numero %d\n", n);


  printf("0  1  "); // elementi fuori dal calcolo
  
    
  int a = 1, b = 2, c;
  
  do
    {
      printf("%d  ",a);
      c=b;  // variabile ausiliaria per numero precedente
      b=b+a; // somma attuale col precedente      
      a=c;  // a prende il nuovo precedente
        
    } while (a <= n); // ripete fino al numero inserito
}
