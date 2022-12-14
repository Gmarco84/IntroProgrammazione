#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int n;
    int *a;

    struct elemento *next;
};

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista *ListaDiElementi;

ListaDiElementi init(int m)
{
    ListaDiElementi lista=malloc(sizeof(ElementoDiLista));
    lista->n=m;
    lista->a=malloc(sizeof(int)*m);
    for (int i=0;i<m;i++)
        {
            printf("%d. valore : ", i+1);
            scanf("%d",lista->a+i);
        }
    lista->next=NULL;

    return lista;
}


void print(ListaDiElementi lista)
{
    if(!lista)
        return;

    printf("\nLista : ");
    for (int i=0;i<lista->n;i++)
        printf("%d ",*(lista->a+i));
    printf("\n");

    print(lista->next);
    return;
}

int ntot(ListaDiElementi lista)
{
    if (!lista)
        return 0;
    return (lista->n) + ntot(lista->next);
}

int largest(ListaDiElementi lista)
{
    if (!lista)
        return 0;
    int max=lista->n;

    while(lista->next)
    {
        if (max < lista->n)
            max=lista->n;
        lista=lista->next;
    }
    return max;
}


void main()
{
    ListaDiElementi l=init(5);
    printf("\n");
    l->next=init(3);
    print(l);

    printf("\nTotali valori = %d\n",ntot(l));
    printf("\nArray più grande = %d\n",largest(l));
    return;
}