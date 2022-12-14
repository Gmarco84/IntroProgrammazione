#include <stdio.h>

int p_scal(int a[], int b[], int n)
{
    int somma=0;
    for (int i=0;i<n;i++)
        somma+=a[i]*b[i];
    return somma;
}

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    printf("%d\n",p_scal(a,b,5));
    return 0;
}