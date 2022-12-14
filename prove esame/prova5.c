#include <stdio.h>

void ordina (int a[], int n)
{
    int t;

    for(int i=0; i<n-1 ; i++)
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

/*    int min;
for (int i=0 ; i<n ; i++)
    {
        min = i; //ipotesi
        
        for (int j=i+1 ; j<n ; j++)
            if ( a[j] < a[i] ) 
                min = j;
        
        t = a[min];
        a[min] = a[i];
        a[i] = t;
    }
        
}*/
   

void main()
{
    //int a[]={3,5,7,3,2,5,9,0,6,3};
    int a[]={3,1,2};
   
    for (int i=0;i<3;i++)
        printf("%d - ",a[i]);
    printf("\n");

    ordina(a,3);

    printf("\n");
    for(int i=0;i<3;i++)
        printf("%d - ",a[i]);
    printf("\n");
    return;
}