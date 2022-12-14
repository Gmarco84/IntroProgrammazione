#include <stdio.h>
#include <stdlib.h>

void init(int a[],int n)
{
    for (int i=0;i<n;i++)
        a[i]=0;
    return;
}

int max(int a[],int n)
{
    int m=a[0];
    for (int i=1;i<n;i++)
        if (a[i]>m)
            m=a[i];
    return m;
}

void ordina(int a[],int b[],int n,int *p)
{
    for (int i=n-1;i>=0;i--)
        {
            *(p+b[a[i]]-1)=a[i];
            b[a[i]]--;
        }
}

int *conta(int a[],int b[],int n)
{
    for (int i=0;i<n;i++)
        b[a[i]]++;

    int m=max(a,n);
    int *p=(int *)malloc(sizeof(int)*n);

    for (int i=1;i<=m;i++)
        b[i]=b[i]+b[i-1];

    ordina(a,b,n,p);
    return p;
}



void main()
{
    int a[]={3,1,1,5,4,4,4,3,1};
    int n=9;
    int b[n];
    
    init(b,n);

    printf("\nA = ");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);
    
    int *p=conta(a,b,n);

    printf("\nB = ");
    for (int i=0;i<n;i++)
        printf("%d - ",b[i]);

    printf("\nC = ");
    for (int i=0;i<n;i++)
        printf("%d - ",*(p+i));
    printf("\n");
    
    return;
}