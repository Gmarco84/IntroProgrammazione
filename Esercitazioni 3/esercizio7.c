// Si implementi una funzione che calcola la seguente succdessione fino al termine n-esimo
// a=p se n=1 altrimenti, se n>1 a=1/2 * (a + p/a)

#include <stdio.h>
#include <math.h>

double succ(int n, double p) // funzione che restituisce l'ultimo elemento della successione
{
  double a=p;

  printf("\nElementi della successione : \n");
  printf(".a1 : %.4lf\n", a);

  for (int i = 2; i <= n; i++)
    {
      a = (a + (p / a)) / 2;
      printf(".a%d : %.8lf\n", i, a);
    }

  return a;
}

void main()
{
  int n;
  double p;

  do 
    {
      printf("\nInserire n ( > 0 ) : ");
      scanf("%d", &n);
    } while (n < 1);

  printf("\nInserire p: ");
  scanf("%lf", &p);

  printf("\nIl limite della successione tende alla radice quadrata di %.8lf , cioè %.8lf \n", p, sqrt(p));
  printf("Infatti a%d = %.8lf\n", n, succ(n,p));
}