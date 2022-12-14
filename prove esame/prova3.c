#include <stdio.h>

int is_inside(int x, int y, int z)
{
    if ((x>=y)&&(x<=z)) return 0;
    return -1;
}

int overlap_size(int i, int j,int t, int u)
{
    if ((i>j)||(t>u)||(j<t)) return -2;
    
    int conta=0;
    
    for (int c=i;c<=u;c++)
        if ( ( is_inside(c,i,j) + is_inside(c,t,u) )== 0 )
            conta=conta+1;
    
    return conta;    
}

int main()
{
    printf("\n%d\n",overlap_size(1,5,3,12));
    return 0;
}