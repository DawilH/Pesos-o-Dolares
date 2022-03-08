#include <stdio.h>

// El programa da la cantidad mayor en pesos y en dolares, agregue un scanf, un if y un else para el programa//

int main(void) {
  int Pesos;
  int Dolares;
  printf ("Ingrese el valor en pesos: ");
  scanf("%d" , &Pesos);
  printf("Ingrese el valor en dolares: ");
  scanf("%d" , &Dolares);
  Dolares = (Dolares * 58);
  if (Pesos >= Dolares)
    {
  printf("Cantidad en pesos: %d", Pesos);
  }
  else 
    {
      printf("Cantidad de dolares en pesos: %d" , Dolares);
      }
  
  return 0;
}