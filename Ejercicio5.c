//En una empresa se aplica un descuento del 8% a todos los clientes cuyas compras superen los 2,500 pesos. Realice 
//un programa en c para calcular cuanto debe pagar el consumidor.

#include <stdio.h>

int main()
{
    float i;
    
    printf("ingrese la cantidad a pagar:\n");
    scanf("%f", &i);
    
    if(i>2500)
    {
        i=i-(i*0.08);
    }
    
    printf("el total a pagar es: %.2f\n", i);

    return 0;
}
