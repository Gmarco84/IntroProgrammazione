// programma che riceve in ingresso due numeri interi a e b (b>0) e restituisca il risultato della potenza a^b=a*a*..*a (b volte)

#include <stdio.h>

void main()
{
  int a,b;
  
  printf("Risolve a^b.\n\n");
  
  printf("Inserire a : ");
  scanf("%d", &a);
  
  do   // chiede l'inserimento di b finchè bnon è >0
    {
      printf("\nInserire b ( b > 0 ) : ");
      scanf("%d", &b);
      
    } while (b<1); //ripete ciclo fintantochè b<1

  
  int p=1;  // risultato

  for (int i = 1; i <= b; i ++)  //ciclo per calcolo potenza b-esima di p
    {
      p=p*a;
    }

  printf("\nIl risultato di a^b è uguale a : %d", p);
}