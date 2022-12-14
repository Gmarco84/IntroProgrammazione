#include <stdio.h>
#include <stdlib.h>

int trova(int a[],int n, int x)
{
    int i=0;
    while(i<n&&a[i]!=x)
        i++;
    return i!=n;
    
}

int conta(int a[],int n)
{
    int c=1;
    for (int i=1;i<n;i++)
        if (!trova(a,i,a[i]))
            c++;
    return c;
}

int *punta(int a[],int n)
{
    int *p=(int *)malloc(sizeof(int)*conta(a,n));
    *p=a[0];
    int j=1;
    for (int i=1;i<n;i++)
        if (!trova(a,i,a[i]))
        {
            *(p+j)=a[i];
            j++;
        }
    return p;
}
void main()
{
    int n=10;
    int a[]={1,2,2,3,1,4,6,3,2,1};
    
    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n sono : %d\n", conta(a,n));

    printf("\n");
    int *b=punta(a,n);
    
     for (int i=0;i<conta(a,n);i++)
        printf("%d ",*(b+i));
   

    
    return;
}