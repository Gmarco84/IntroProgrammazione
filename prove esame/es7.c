#include <stdio.h>

int verifica(int a[],int n,int k)
{
    for (int i=2;i<n;i++)
        if ( k== (a[i]+a[i-1]+a[i-2]) )
            return 1;
    return 0;
}

void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int k=27;
    if (verifica(a,10,k))
        printf("\n%d ok",k);
    else
        printf("\n%d no",k);
    return;
}