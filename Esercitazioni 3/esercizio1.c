// Si scriva una funzione che riceva in ingresso tre numeri interi x,y,z e restituisca il massimo. Si crei poi una funzione di test che prenda in input due dei tre numeri dall'utente ,x e y, e testi la tripletta (x,y,w) con w appartenente [1,max(x,y)]

#include <stdio.h>

int minimo(int x, int y, int z) // funzione che restituisce minimo
{
  if ( (x < y) & (x < z) )
  {
    return x;
  }
  else
  if ( (y < x) & (y < z))
  {
    return y;
  }
  else
    return z;
}

void test(int x, int y)  // funzione per test
{
  int max = x;  // max assume il valore più alto tra x e y

  if (y > x)
    max = y;

  printf("\n\nTest...\n");

  if (max == 0)
  {
    printf("Nessuna tripletta valida per il test.\n");
  }
  else
  {  
    // ciclo per testare tripletta di x, y, max da 1 fino a max
    for (int i = 1; i <= max; i ++)
    {
      printf("tripletta (%d, %d, %d) - minimo : %d\n", x, y, i, minimo(x, y, i));
    
    }
  }
  return;
  
}

void main()
{
  int x, y, z;

  printf("Inserire x : ");
  scanf("%d", &x);

  printf("\nInserire y : ");
  scanf("%d", &y);

  printf("\nInserire z : ");
  scanf("%d",&z);

  printf("\n\nIl minimo tra %d, %d e %d è : %d", x, y, z, minimo(x, y, z));

  test(x, y);
  
}