#include <stdio.h>
#include <stdlib.h>

void ordina(int a[],int n)
{
    int t;

    for (int i=0 ; i<n-1 ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
                if ( a[j] < a[i] )
                {      
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
        }

    
    return;
}

void main()
{
    int a[]={1,3,5,2,4};
    int n=5;
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);

    printf("\n");
    ordina(a,n);

    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);
    return;
    
}