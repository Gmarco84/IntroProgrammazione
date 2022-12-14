#include <stdio.h>

int controlla(int a[],int n,int x)
{
    int i=0;

    while ( i<n && a[i]!=x )
        i++;

    return i==n;
}

int predicato(int a[],int n)
{
    int i=1;

    while ( i<n && controlla(a,i,a[i]))
        i++;

    printf("%d",(i==n));
    return i==n;
}

int main()
{
    int a[]={3,4,3,1,2,0};
    
    if (predicato(a,6))
        printf("\nsi predicato\n");
    else
        printf("\nno predicato\n");
    
    return 0;
}