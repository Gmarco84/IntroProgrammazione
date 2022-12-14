#include <stdio.h>

void ordina(int a[], int n)
{
    int t;
    for (int i=1;i<n;i++)
        for (int j=0;j<i;j++)
            if (a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
    return;
}

void scambia(int a[], int n)
{
    int t;
    int i=0;
    while(i<n-1)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i+=2;
        }
    return;
}

void main()
{
    int a[]={4,10,8,7,-2,99,0};
    int n=7;

    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);

    ordina(a,n);
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);

    scambia(a,n);
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);

    printf("\n");
    return;
    
}