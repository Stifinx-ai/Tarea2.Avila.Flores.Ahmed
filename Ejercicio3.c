//En una casa de cambio necesitan construir un programa que dado como dato una cantidad expresada en dólares, convierta esa cantidad en pesos.

#include <stdio.h>

int main()
{
    float Pesos=11.96;
    float Dollar;
    
    printf("Inscriba la cantidad de Dollar:\n");
    scanf("%f", &Dollar);
    
    Dollar=Dollar*Pesos;
    
    printf("La cantidad en pesos es: %.2f\n", Dollar);
    
    return 0;
}
