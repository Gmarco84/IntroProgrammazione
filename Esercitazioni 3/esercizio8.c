// Si consideri la seguente serie:
// Sn=sommatoria da k=0 a n di 1 / (2k+1)^2
// si verifichi che per n -> infinito la serie tende a pi_greco^2 / 8

#include <stdio.h>
#include <math.h>

double somma(int n)  // funzione sommatoria
{
  double s = 0;
  for (int k = 0; k <= n; k++)
    {
      s = s + 1 / pow(2 * k + 1, 2);
    }
  return s;
}

void main()
{
  int n;

  printf("\nVerifica che per n grande, la sommatoria tende a  (pi grco)^2  / 8,  cioè : %.5lf\n", pow(3.14159265, 2)/8);
  
  do  // ciclo per avere in ingresso n>0
    {
      printf("\nInserire n ( > 0 ) : ");
      scanf("%d", &n);
    } while (n < 1); 

  printf("\nCon n = %d, la sommatoria è uguale a %.5lf", n, somma(n));

}