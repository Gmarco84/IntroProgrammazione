// Si scriva una funzione che, ricevuti in ingresso le coordinate p1=(x1,y1) e p2=(x2,y2) di due punti del piano cartesiano, restituisca la loro distanza euclidea

#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2)
{ // ritorna la distanza calcolata come
  // d(p1,p2) = sqrt ( (x1-x2)^2 + (y1-y2)^2 )
  return sqrt( pow((x1 - x2), 2) + pow((y1 - y2), 2)); 
}  

void main()
{
  double x1, x2, y1, y2;  // coordinate 

  printf ("Inserire le coordinate (x1,y1) e (y1,y2) per cui si vuole calcolare la distanza:\n\n");
  
  printf("x1 : ");
  scanf("%lf", &x1);
  
  printf("\ny1 : ");
  scanf("%lf", &y1);
  
  printf("\nx2 : ");
  scanf("%lf", &x2);
  
  printf("\ny2 : ");
  scanf("%lf", &y2);

  printf("Distanza tra (%0.2lf, %0.2lf) e (%0.2lf, %0.2lf) =  %0.2lf \n", x1, y1, x2, y2, distanza(x1, y1, x2, y2));
    
}
