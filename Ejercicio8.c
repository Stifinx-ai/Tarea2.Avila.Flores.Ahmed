//construir un diagrama de flujo que pueda determinar, dado dos números enteros, si un número es divisor del otro.

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    if (b == 0) 
    {
        printf("No se puede dividir por cero.\n");
    } else if (a % b == 0) 
    {
        printf("%d es divisible por %d\n", a, b);
    } else 
    {
        printf("%d no es divisible por %d\n", a, b);
    }

    return 0;
}
