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

lista unisci(lista a,lista b, int j)
{
    lista testa;
    if (j>0)
    {
        testa=a;
        while(a->next!=NULL)
            a=a->next;
        a->next=b;
        return testa;
    }
    else
    {
        testa=b;
        while(b->next!=NULL)
        b=b->next;
        b->next=a;
        return testa;
    }    
}

void main()
{
    lista a=init();
    printf("\n");
    lista b=init();
    int j;
    printf("\nInserire J : ");
    scanf("%d",&j);
    lista c=unisci(a,b,j);
    printf("\n");
    stampa(c);
    return;
    
}
