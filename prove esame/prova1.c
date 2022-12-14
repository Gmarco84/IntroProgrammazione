#include <stdio.h>

int primo(int n,int i)
{
    if (n==i) return 1;
    if ((n%i)==0) return 0;
    return primo(n,i+1);
}#include <stdio.h>

int primo(int n,int i)
{
    if (n==i) return 1;
    if ((n%i)==0) return 0;
    return primo(n,i+1);
}

int myfunction(int x,int y)
{
    int c=0;
    if (x<y)
    {
        for (int i=x+1;i<=y-1;i++)
                if (primo(i,2)==1) c=c+1;
    }
    else if (y<x)
        for (int i=y+1;i<=x-1;i++)
                if (primo(i,2)==1) c=c+1;
    return c;
}

int main()
{
    int x,y;
    printf("x : ");
    scanf("%d",&x);
    printf("\nY : ");
    scanf("%d",&y);
    printf("\nPrimi tra %d e %d : %d\n",x,y,myfunction(x,y));
    return 0;
}

int myfunction(int x,int y)
{
    int c=0;
    if (x<y)
    {
        for (int i=x+1;i<=y-1;i++)
                if (primo(i,2)==1) c=c+1;
    }
    else if (y<x)
        for (int i=y+1;i<=x-1;i++)
                if (primo(i,2)==1) c=c+1;
    return c;
}

int main()
{
    int x,y;
    printf("x : ");
    scanf("%d",&x);
    printf("\nY : ");
    scanf("%d",&y);
    printf("\nPrimi tra %d e %d : %d\n",x,y,myfunction(x,y));
    return 0;
}