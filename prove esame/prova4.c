#include <stdio.h>

int f(int a[], int n, int x)
{
    int i=0;
    
    while ( (i<n) && (a[i]>x) )
        i++;
    
    return (i==n);
}


int f2(int a[],int n)
{
    int i=1;
    while ( (i<n) && (f(a,i,a[i])) )
       {
            printf("\n--%d",a[i]);
            i++;
        }

    return (i==n);
}

void main()
{
    int a[]={7,6,5,4,3,2,1};
    printf("\n%d\n",f2(a,7));
    
    return;
}