#include <stdio.h>

int pot(int b, int e)
{
  if (e==1)
    return b;
  else
   return(b*pot(b,e-1)); 
}

int somma(int n)
{
  if (n==1)
    return 1;
  else
    return n+somma(n-1);
  
}

int main()
{
  int n;
  do
    {
      printf("\nInserire n ( > 0 ) : ");
      scanf("%d",&n);
    } while (n < 1);

  printf("Sommatoria = %d", pot(2,n)*somma(n));
  

}