#include <stdio.h>
#include <stdlib.h>

void ordina(int *p,int n)
{
    int t;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if (*(p+j)<*(p+i))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
    return;
}

int *unisci_a_b(int a[],int n,int b[],int m)
{
    int *p=(int *)malloc(sizeof(int)*(n+m));
    for (int i=0;i<n;i++)
        *(p+i)=a[i];
    for (int i=0;i<m;i++)
        {
            *(p+n)=b[i];
            n++;
        }
    return p;
}

void main()
{
    int a[]={1,2,5,7,8,9};
    int n=6;
    int b[]={1,1,3,4,6,7,8,9};
    int m=8;

    printf("\n");
    for (int i=0;i<n;i++)
        printf("%d - ",a[i]);
    printf("\n");
    for (int i=0;i<m;i++)
        printf("%d - ",b[i]);

    int *p=unisci_a_b(a,n,b,m);
    ordina(p,n+m);

    printf("\n");
    for (int i=0;i<n+m;i++)
        printf("%d - ",*(p+i));
    
}