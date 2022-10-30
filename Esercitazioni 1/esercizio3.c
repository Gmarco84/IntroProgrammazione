// calcolo prodotto n1 x n2 tramite algoritmo del contadino russo...

#include <stdio.h>
#include <math.h>

void main()
{
  int n1, n2;   //input
  int p = 0;       //prodotto (=0 in caso di un numero in input=0)

  printf("Inserire primo numero : ");
  scanf("%d", &n1);  //input n1
  printf("\nInserire secondo numero : ");
  scanf("%d", &n2);  //input n2

  printf("%d x %d = ", n1, n2);

  int ausn1 = abs(n1);  //ausn1=valore assoluto(n1)

  while (ausn1 != 0) // finchè diverso da 0
    {
      if ( (ausn1 % 2) == 1) // se il resto =1
      {
        p = p + n2;        // somma degli n2 utili
      }
      ausn1 = ausn1 / 2;   // quoziente di ausn1 diviso 2
      n2 = n2 * 2;         //raddoppio n2 
    }

  if (n1 < 0)       // se n1 negativo
  {
    p = p * (-1);    // moltiplico  per (-1)
  }

  printf("%d", p);  // stampa risultato
  
}