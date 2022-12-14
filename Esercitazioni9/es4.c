#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int info;
struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;

lista init()
{
    lista l=NULL;
    int n;

    printf("\nInserire n. :");
    scanf("%d",&n);

    if (n==-1) return l;

    lista nuovo=malloc(sizeof(elemento));
    nuovo->info=n;
    nuovo->next=NULL;
    l=nuovo;

    printf("\nInserire n. :");
    scanf("%d",&n);

    while(n!=-1)
        {
            nuovo->next=malloc(sizeof(elemento));
            nuovo=nuovo->next;
            nuovo->info=n;
            printf("\nInserire n. :");
            scanf("%d",&n);
        }
    nuovo->next=NULL;

    return l;        
}

void stampa(lista l)
{
    if (l==NULL)
        return;
    printf("%d ",l->info);
    stampa(l->next);
}

int conta(lista l)
{
    if (l==NULL) return 0;
    return 1+conta(l->next);
}

lista trovanum(lista l,int val)
{
    if(l==NULL) return NULL;
    if (l->info==val) return l;
    return trovanum(l->next,val);
}

lista prec(lista l, int val)
{   
    if (!l) return NULL;
    
    if (l->info <= val)
        return l;
    
    return prec(l->next,val);
}

lista suc(lista l, int val)
{
    if (!l) return NULL;
    if (l->info >= val)
        return l;

    return (suc(l->next,val));
}

lista ordina(lista l)
{
    if (l && l->next)
    {
        int k;

        do
        {
            lista a=l;
            k=0;

            while(a->next)
            {
                lista b=a;
                a=a->next;

                if ( (b->info) > (a->info))
                {
                    int t=b->info;
                    b->info=a->info;
                    a->info=t;
                    k=1;
                }
            }
        } while (k!=0);
    }
    return l;
}

lista ultimo(lista a)
{
    if (!a) return NULL;
    if (!a->next) return a;
    return ultimo(a->next);
}



lista aggiungi_in_ordine(lista a,int x)
{
    if (!a) return NULL;
    
    lista nuovo=malloc(sizeof(elemento));
    nuovo->info=x;

    if ( (a->info) >= x)
        {
            nuovo->next=a;
            return nuovo;
        }
    
    if (!a->next)
    {
        a->next=nuovo;
        nuovo->next=NULL;
        return a;
    }
        
    lista fine=ultimo(a);
        
    if ( (fine->info) <= x)
    {
        fine->next=nuovo;
        nuovo->next=NULL;
    }
    else
    {
        lista inf=prec(a,x);
        lista sup=suc(a,x);

        inf->next=nuovo;
        nuovo->next=sup;
    }
        
    
    return a;
}

lista sottolista(lista l,int k)
{
    for(int i=1;i<=k;i++)
        l=l->next;
    return l;
}

lista noduplicati(lista l)
{
    lista b=malloc(sizeof(elemento));
    b->info=l->info;
    b->next=NULL;
    lista a=b;

    int f;
    
    while(l->next)
    {
        l=l->next;
        f=0;
        lista x=a;
        while (x)
        {
            if (l->info==x->info)
                f=1;
            x=x->next;
        }
        if (f==0)
        {
            b->next=malloc(sizeof(elemento));
            b=b->next;
            b->info=l->info;
            b->next=NULL;
        }
    }
    return a;
}

lista inverti(lista l)
{
    if (!l || !(l->next))
        return l;
    
    lista aus=l;
    
    while(aus->next) aus=aus->next;
    
    lista a=malloc(sizeof(elemento));
    
    a->info=aus->info;
    a->next=NULL;
    lista b=a;
    
    lista ultimo=aus;
    
    int flag;    
    
    do
    {   
        flag=0;
        aus=l;
        while(aus->next!=ultimo)
        {
            aus=aus->next;
            flag=1;
        } 
        
        if(flag)
        {
            a->next=malloc(sizeof(elemento));
            a=a->next;
            a->info=aus->info;
            a->next=NULL;
            ultimo=aus;
        }
        
    } while(flag!=0);

        a->next=malloc(sizeof(elemento));
        a=a->next;
        a->info=l->info;
        a->next=NULL;
            
    
    return b;
}

    
   
void main()
{
    lista a;
    a=init();
    printf("\n");
    stampa(a);
    

    printf("\n");
    a=ordina(a);
    stampa(a);
    printf("\n");

/*    int k;
    printf("\nAggiungi K : ");
    scanf("%d",&k);
    a=aggiungi_in_ordine(a,k);
    printf("\n");
    stampa(a);
    printf("\n");
 /*   
    printf("\n");
    stampa(sottolista(a,3));
    printf("\n");

    printf("\n");
    stampa(noduplicati(a));
    printf("\n"); */

    printf("\n");
    stampa(inverti(a));
    printf("\n");
    
    return;
}