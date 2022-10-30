//Calcolae il MCD tra due numeri tramite il th. di Euclide

#include <stdio.h>

void main()
{
  int x, y;
  int ausx, ausy;
//int mcd;  variabile per mcd

  do
    {
      printf("Inserire due numeri maggiori di 0\n\n");
      printf("Inserire x : ");
      scanf("%d", &x);
      printf("\ninserire y : ");
      scanf("%d", &y);

      if ( (x <= 0) || (y <= 0) ) //controlla se i numeri inseriti sono maggiori di 0
      {
        printf("Errore inserimento, x e y devono essere maggiori di 0!\n\n");
        scanf("");
      } 
       
    } while ( (x <= 0) || (y <= 0) );  // ripete fintantochè l'inserimento dei numeri non risulta corretto

  ausx = x;
  ausy = y;

  while (ausx != ausy)  // se i numeri inseriti sono diversi
    {
      if (ausx > ausy)  // se x maggiore di y
      {
        ausx = ausx - ausy; // sottrae a y il valore di x 
        }
      else if (ausx < ausy)  // altrimenti se x minore di y
      {    
        ausy = ausy - ausx;   // sottrae x al valore di y
      }    
    }

//  mcd = ausx;  associo alla variabile il valore del mcd

  printf("\nIl MCD dei numeri %d e %d è : %d", x, y, ausx);
  
}