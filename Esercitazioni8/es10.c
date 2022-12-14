#include <stdio.h>
#include <stdlib.h>


struct nodo
{
    int info;
    struct nodo* next;
};

typedef struct nodo elemento;
typedef struct nodo *lista;



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

void init(int *p,lista l)
{
    int i=1;
    *(p+0)=(*l).info;
    l=l->next;
    while((*l).next!=NULL)
        {
            *(p+i)=(*l).info;
            i++;
            l=l->next;
        }
}



void main()
{
    lista new=malloc(sizeof(elemento));
    lista listavalori=new;


    int n;

    printf("\n");

    printf("\nInserire n. : ");
            scanf("%d",&n);

    while(n>0)
        {
            (*new).info=n;
            (*new).next=malloc(sizeof(elemento));
            new=new->next;  
        

            printf("\nInserire n. : ");
            scanf("%d",&n);
        }
    new->next=NULL;
 
    printf("\nLista :\n");
    stampa(listavalori);

    printf("\n");

    int c=conta(listavalori);
    int *a=(int *)malloc(sizeof(int)*c);
    init(a,listavalori);

    for (int i=0;i<c;i++)
        printf("%d ",*(a+i));
    
    
    printf("\n");
    return;
}