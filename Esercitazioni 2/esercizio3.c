//  Letti due interi a e b da tastiera, determinare e stampare le seguenti informazioni:
// 1- se b è numero positivo o negativo
// 2- se a è numero pari odispari
// 3- il valore di a + b
// 4- quale scelta dei segni nell'espressione (+-a)+(+-b) porta al massimo ed il suo valore

# include <stdio.h>

void main()
{
  int a, b;
  char a1='+', b1='+'; // caratteri per stringa richiesta al punto 4 dell'esercizio

  printf("Inserire a : ");
  scanf("%d", &a);

  printf("\nInserire b : ");
  scanf("%d", &b);

  printf("\n\n");

  if (b == 0)
      {
        printf(". b è uguale a 0.\n");
      }
  else
      {
        if (b < 0)
        {
          printf(". b è negativo.\n");
          b1='-'; // se è negativo sarà necessario cambiare segno per punto 4
        }
        else
        {
          printf(". b è positivo.\n");
        }
      }

  if (a == 0)
      {
        printf(". a è uguale a 0.\n");
      }
  else
      {
        if ( (a % 2) == 1)
        {
          printf(". a è dispari.\n");
        }
        else
        {
          printf(". a è pari.\n");
        }
      }

printf(". a + b = %d\n", (a + b));

  if (a < 0)
  {
    a1 = '-'; // se negativo servirà cambiare segno per punto 4 
  }
  
printf(". (%c a) + (%c b) = %d porta al valore massimo\n", a1, b1, (abs(a) + abs(b)) );
  // il risultato massimo è la somma dei valori assoluti
  
}
  
    