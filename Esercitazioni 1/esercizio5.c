// calcolo del massimo e minimo di un insieme di numeri n

#include <stdio.h>

void main()
{
  int n;  //numeri da inserire
  int aus; // ausiliaria per inserimento
  int min=0, max=0;  // min e max dell'insieme dei numeri

  do
    {
      printf("Numeri da inserire (n > 0 ) : ");
      scanf("%d", &n);
    } while ( n < 1 ); //ripete la richiesta fintantochè n risulterà < di 1

  printf("\n1° numero : ");
  scanf("%d", &aus);

  min = aus;   // se è inserito un unico valore allora
  max = aus;   // min e max combaciano

  if ( n > 1 )    //se invece bisogna inserire >1 valori
    for (int i = 2; i <= n; i++) // ciclo per leggere n valori
        {
          printf("\n%d° numero : ", i);
          scanf("%d", &aus);
          if ( aus < min )  // controllo se il nuovo valore è minore del minimo
            min = aus;
          if ( aus > max )  // controllo se il nuovo valore è maggiore del massimo
            max = aus;        
        }
  
  printf("\n Il numero massimo inserito è : %d", max);
  printf("\n Il numero minimo inserito è : %d", min);
}