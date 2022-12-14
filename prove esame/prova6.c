#include <stdio.h>
#include <stdlib.h>

int trova(int *a,int from,int to,int x)
{
    int med=(from+to)/2;
    printf("%d ",med);

    if (x==*(a+med)||x==*(a+from)||x==*(a+to)) return 1;
    if (to-from==1) return 0;
    if (x<*(a+med)) trova(a,from,med,x);
    else trova(a,med,to,x);
}

void main()
{
    int *a=(int *)malloc(sizeof(int)*10);
    for (int i=0;i<10;i++)
        *(a+i)=i*2;

    for (int i=0;i<10;i++)
        printf("%d - ",*(a+i));
    printf("\n");

    if (trova(a,0,9,0))
        printf("\n TROVATO");
    else printf("\n NON TROVATO");

    return;
}