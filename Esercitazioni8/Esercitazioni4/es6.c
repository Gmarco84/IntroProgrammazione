#include <stdio.h>

void scambia(int a[],int n, int k)
{
    int t;
    if (k<0)
        k=-k;
    while(k!=0)
        {
            t=a[k-1];
            for (int i=k;i<n;i++)
                {
                    a[i-1]=a[i];
                    a[i]=t;
                }
            k--;
            n--;
        }
       
    return;
}

void main()
{
    int a[]={0,2,5,1,10,7};
    int n=6;
    
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);

    printf("\n");
    scambia(a,n,3);
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);
}
    