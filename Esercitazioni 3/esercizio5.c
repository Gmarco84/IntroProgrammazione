// Dato un numero intero in base binaria, convertirlo in base decimale

#include <stdio.h>
#include <math.h>

int da_bin_a_dec(long int n) // restituirà il numero in base 10 di n che è in base 2. Restituirà -1 in caso di n non binario
{
  int dec = 0; // conterrà il numero in base 10 
  int i = 0;  // variabile indice

  if (n<0)    // se è un numero negativo non è binario
    return -1;

  while (n>0) // ciclo per calcolare decimale da binario
    {
      if (( (n%10)!=0) & ((n%10)!=1)) // controlla se numero binario (se ha resto diverso da 0 e 1)
      {
        return (-1); // se n non è binario restiruisce -1
      }
      
      dec = dec + ( (n % 10) * pow(2, i) ); // somma di ( resto per 2^i )
      n = n / 10;
      i++;
    }

  return dec;
}

void main()
{
  long int n;  // numero binario
  int dec;     // numero decimale
  
  do  // ripete ciclo finchè non viene inserito correttamente un numero binario 
    {
      printf("Inserire numero binario : ");
      scanf("%ld", &n);
     
      dec = da_bin_a_dec(n);

      if (dec == -1)
      {
        printf("\nAttenzione!\n");
        printf("Il valore inserito non è un numero binario!\n");
        printf("Riprovare\n\n");
      }
      else
        {
          printf("\nL'equivalente in base 10 è : %d\n", dec);
        }
    }  while (dec <0); // ripete fintanto che n inserito non è binario

}