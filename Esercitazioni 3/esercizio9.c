// Implementare una funzione che calcoli il termine n-esimo della serie:
// Sn = sommatoria per i=1 a n di (i * k^(i+1)) / 3^i

#include <stdio.h>
#include <math.h>

double somma(int n, int k) 
{
  double s = 0;

  for (int i = 1; i <= n; i++)
    {
      s = s + (i * pow(k, i + 1)) / pow(3, i);
      printf("%.0lf\n", s);
    }
  return s;
}

void main()
{
  int n, k;
  double sommatoria;
  
  do  // ciclo per avere valori di n positivi
    {
      printf("\nInserire n ( > 0 ) : ");
      scanf("%d", &n);
    } while (n < 1);

  // test con k positivo
  for (int k = 1; k <= 10; k++)
    {
      printf("\nSommatoria con k = %d  :  %.2lf\n", k, somma(n, k));
    }

  printf("\n");

  // test con k negativo
  for (int k = -1; k >= -10; k--)
    {
      printf("\nSommatoria con k = %d  :  %.2lf\n", k, somma(n, k));
    }

  // test con k = 0
  for (int n1 = 1; n1 <= n; n1++)
    {
      printf("\nSommatoria con k = 0 e n = %d  :  %.8lf\n", n1, somma(n1, 0));
    }

}