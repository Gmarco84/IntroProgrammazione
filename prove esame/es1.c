#include <stdio.h>

/*int somma(int a[], int n)
{
    int somma=0;
    for (int i=0;i<n;i++)
        if (a[i]%2 == 0)
            somma+=a[i];
    return somma;
}*/

int somma_ric(int a[], int n)
{
    if (n==0)
    {
        if (a[n]%2==0)
            return a[n];
        else return 0;
    }

    if(a[n]%2==0)
        return a[n]+somma_ric(a,n-1);
    return somma_ric(a,n-1);   
     
}

int main()
{
    int a[]={3,4,8,9,2,1,7,6,4};
    printf("\nSomma = %d\n",somma_ric(a,8));
}