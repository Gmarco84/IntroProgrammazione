#include <stdio.h>

void calcola(int b[],int n)
{
    for (int i=1;i<n;i++)
        b[i]=b[i]+b[i-1];
    return;
    
}

void conta(int a[],int n,int b[])
{
    for (int i=0;i<n;i++)
        b[a[i]]++;
    return;
}

void init_vuoto(int a[],int n)
{
    for (int i=0;i<n;i++)
        a[i]=0;
    return;
}

void ordina(int ris[],int a[],int b[],int n)
{
    for (int i=n-1;i>=0;i--)
        {
            ris[b[a[i]]]=a[i];
            b[a[i]]--;
        }
    return;
}

void main()
{
    int a[]={12,11,10,9,8,7,6,5,4,3,2,1,0};
    int b[13],ris[13];
    init_vuoto(b,13);

    conta(a,13,b);
    calcola(b,13);
    ordina(ris,a,b,13);
    printf("\n");
    for (int i=0;i<13;i++)
        printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<13;i++)
        printf("%d ",ris[i]);
    return;
}