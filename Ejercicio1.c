//Avila Flores Ahmed
//Escriba un codigo en c tal que dado como datos dos números y calcular la suma, resta y multiplicación de dichos números.


#include <stdio.h>

int main()
{
  int a, b;
  int sum, res;
  int mult;

  printf("escribe un numero:\n");
  scanf("%d ", &a);
  printf("escribe otro número:\n");
  scanf("%d ", &b);

  sum=a+b;
  res=a-b;
  mult=a*b;

  printf("La suma es: %d\n", sum);
  printf("la resta es: %d\n", res);
  printf("la multiplicación es: %d\n", mult);

  Return 0;
}
