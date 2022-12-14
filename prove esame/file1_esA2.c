cd#include <stdio.h>

int somma(int n,int arr[])
{
  if (n==0)
    return 1;
  return (arr[n-1]+arr[n-2])*somma(n-1,arr);
}

int main()
{
  int n;

  do 
    {
      printf("\nInserire lunghezza array ( > 0 ) :");
      scanf("%d",&n);
    } while (n<1);

  int array[n];

  for (int i=0; i<n;i++)
    {
      printf("\n%d° vaolre : ",i+1);
      scanf("%d",&array[i]);
    }

 printf("Somma = %d", somma(n,array));
  

  return;
}
