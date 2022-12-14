#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int info;
    struct nodo* next;
};

typedef struct nodo elemento;
typedef struct nodo *lista;

int somma(lista p)
{
    if ((*p).next==NULL)
        return (*p).info;

    return (*p).info+somma((*p).next);
}

int conta(lista p)
{
    if ((*p).next==NULL)
        return 0;

    return 1+conta((*p).next);
}

void stampa(lista p)
{
    while((*p).next!=NULL)
        {
            printf("%d ",(*p).info);
            p=p->next;
        }
            
}

void main()
{
    lista listapari=NULL;
    lista listadispari=NULL;

    lista newp=malloc(sizeof(elemento));
    lista newd=malloc(sizeof(elemento));

    listapari=newp;
    listadispari=newd;

    int n;

    printf("\n");

    printf("\nInserire n. : ");
            scanf("%d",&n);

    while(n>0)
        {
            if (n%2==0)
            {
                (*newp).info=n;
                (*newp).next=malloc(sizeof(elemento));
                newp=newp->next;                
            }
            else if (n%2!=0)
            {
                (*newd).info=n;
                (*newd).next=malloc(sizeof(elemento));
                newd=newd->next;  
            }

            printf("\nInserire n. : ");
            scanf("%d",&n);
        }
    newp->next=NULL;
    newd->next=NULL;

    int sommap=somma(listapari);
    int sommad=somma(listadispari);

    int contap=conta(listapari);
    int contad=conta(listadispari);

    printf("\nLista pari.  TOT : %d     SOMMA : %d\n",contap,sommap);
    stampa(listapari);

    printf("\n");

     printf("\nLista dispari.  TOT : %d     SOMMA : %d\n",contad,sommad);
    stampa(listadispari);
    
    printf("\n");
    return;
}