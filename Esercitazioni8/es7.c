#include <stdio.h>

int verifica(int a[],int n, int k)
{
    for (int i=0;i<n-2;i++)
        if (a[i]+a[i+1]+a[i+2]==k)
            return 1;
    return 0;
}

void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    printf("\n");
    for (int i=0;i<10;i++)
        printf("%d - ",a[i]);
    if (verifica(a,10,17))
        printf("Esiste K\n");
    else
        printf("Non esiste K\n");
    return;
}