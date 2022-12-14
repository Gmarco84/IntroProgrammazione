#include <stdio.h>

int somma(int a[],int n)
{
    if (n==0) return a[n];
    return a[n] + somma(a,n-1);
}

int controlla(int a[],int n,int b[],int m)
{
    int s=somma(b,m-1);
    printf("%d",s);
    for (int i=0;i<n;i++)
        if (a[i]== s)
            return 1;
    return 0;
}

int main()
{
    int a[]={1,11,2,10};
    int b[]={1,2,3,4};

    if (controlla(a,4,b,4))
        printf("\nEsiste");
    else
        printf("\nNon esiste");

    return 0;
}