#include <stdio.h>

void s_a(int n, double* h)
{ 
    if (n==1)
    {
        *h=*h+1/(float)n;
        return;
    }
    
    *h=*h+1/(float)n;
    printf("%.3lf ",*h);
    s_a(n-1,h);
    
}

void main()
{
    int n=5;
    double s=0;
    s_a(n,&s);
    printf("\n somma : %.3lf", s);
    return;
}