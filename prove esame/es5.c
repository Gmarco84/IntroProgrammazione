#include <stdio.h>

void tr(int a[],int n)
{
    int s=1;
    for(int i=0;i<n;i++)
        {
            a[i]=s;
            s=s+i+2;
        }
    return;
}

int main()
{
    int a[10];
    tr(a,10);
    printf("\n");
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
    
}