#include <stdio.h>

void init(int a[],int n)
{
    for (int i=0;i<n;i++)
        a[i]=0;
    return;
}

int controlla(int a[],int n, int x, int j)
{
    for (int i=0;i<n;i++)
        if (j!=i)
            if (x%a[i]==0)
                return 0;
    return 1;
}

void creaB(int a[],int b[],int n)
{
    int j=0;
    for (int i=0;i<n;i++)
        if (controlla(a,n,a[i],i))
        {
            b[j]=a[i];
            j++;
        }
    return;
}

void main()
{
    int a[]={9,2,12,4,5,6};
    int n=6;
    int b[n];
    init(b,n);
    creaB(a,b,n);

    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);
    
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",b[i]);

    return;    
}