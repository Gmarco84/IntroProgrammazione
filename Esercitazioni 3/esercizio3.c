// Si scriva una funzione che riceva in ingresso due numeri double x e y e restituisca 1 se e solo se i due numeri sono uguali a meno di un fattore z, ovvero |x-y|<z, e 0 in caso contrario. Il valore di z deve essere un parametro della funzione

#include <stdio.h>

double assoluto(double x)  // Funzione valore assoluto
{
  if (x < 0)
    return (x * (-1));

  return x; 
}

void controllo (double x, double y)  // Funzione per controllo di x e y con il parametro
{
  double p;  // parametro

  printf("Inserire epsilon (e) : ");
  scanf("%lf", &p);
  
  if (assoluto(x - y) < p)
  {
    printf("\nI due numeri sono uguali con epsilon %lf", p);
    return;
  }

  printf("\nI due numeri sono diversi con epsilon %lf", p);
}

void main()
{
  double x, y;  // numeri da inserire

  printf("Inserire x : ");
  scanf("%lf", &x);

  printf("\nInserire y : ");
  scanf("%lf", &y);

  controllo(x, y);

}