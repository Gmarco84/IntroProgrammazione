// Legge da tastiera un generico numero x e stampa un messaggio che indica se è positivo o negativo. Stampa del valore assoluto. Risolto senza variabile di appoggio

#include <stdio.h>

void main()
{
  float n;
  
  printf("Inserire numero : ");
  scanf("%f", &n);

  if (n > 0)
      printf("\nIl numero inserito è positivo."); 
        
  else if (n < 0)
  {  
      printf("\nIl numero inserito è negativo.");
      n = n * (-1);  //per valore assoluto
  }
    
  else if ( n==0 )
      printf("\nIl numero inserito è 0.");
  

  printf("\nIl valore assoluto è : %0.2f",n);
    
}
