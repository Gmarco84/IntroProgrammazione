#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int info;
    struct nodo *next;
};

typedef struct nodo elemento;
typedef elemento *lista;

void stampa(lista l)
{
    if (l==NULL)
        return;
    printf("%d ",l->info);
    stampa(l->next);
}

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

int conta(lista l)
{
    if (l==NULL) return 0;
    return 1+conta((*l).next);
}

void main()
{
    lista l=init();
    printf("\nHai inserito : ");
    stampa(l);
    printf("\nTotale elementi : %d",conta(l));
    return;
}