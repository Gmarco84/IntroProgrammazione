#include <stdio.h>

int controlla(int a[], int n, int x, int j)
{
    int f=0;
    for (int i=0;i<n;i++)
        if (i!=j)
            if (x%a[i]==0)
                f=1;
    
    return f;   
}

void init_b(int a[], int n, int b[])
{
    int j=0;
    for (int i=0;i<n;i++)
        if (!controlla (a,n,a[i],i))
        {
            b[j]=a[i];
            j++;
        }        
}

void main()
{
    int a[]={3,22,9,11};
    int b[]={0,0,0,0};
    init_b(a,4,b);
    printf("\n");
    
    for (int i=0;i<4;i++)
        printf("%d ",b[i]);
    printf("\n");

    return;
}