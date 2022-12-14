#include <stdio.h>

int min_k(int a[],int n, int k)
{
    int t;
    for (int i=1;i<n;i++)
        for (int j=0;j<i;j++)
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    return a[k-1];
}

void main()
{
    int a[]={1,10,4,99,5};
    printf("\n");
    for (int i=0;i<5;i++)
        printf("%d - ",a[i]);
    printf("\n%d elemnto più piccolo : %d",3,min_k(a,5,3));
    return;
}