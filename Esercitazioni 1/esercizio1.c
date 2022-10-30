// Dato un intero, stampa i quadrati perfetti per tutti gli interi da 0 al numero inserito. (se il numero inserito è negativo lo moltiplica per (-1))

#include <stdio.h>

void main()
{
  int n;

  printf("Inserire numero ( se < 0 lo converto in positivo) : ");
  scanf("%d", &n);

  if ( n < 0 )  // se il numero inserito è negativo lo trasforma in positivo
    n = n * ( -1 );

  for (int i = 0; i <= n; i++) // stampa i quadrati da 0 a n
      printf("\nIl quadrato di %d  è  %d", i, (i*i));
}
