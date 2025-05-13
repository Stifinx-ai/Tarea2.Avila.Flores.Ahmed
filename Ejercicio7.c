//Hacer el codigo para calcular el precio de un ticket de ida y vuelta en ferrocarril, conociendo la distancia de ida y el 
//tiempo de estancia. se sabe que el numero de días de estancia es mayor a 7 y la distancia total (ida y vuelta) es mayor a 800km
//el ticket tiene un descuento del 30% y el precio por km es 0.23

#include <stdio.h>

int main()
{
    float distancia;
    int dia;
    float costo;
    
    printf("Ingrese la distancia a viajar (solo ida):\n");
    scanf("%f", &distancia);
    
    printf("Ingrese los días de estancia:\n");
    scanf("%d", &dia);
    
    distancia=distancia*2;
    costo=distancia*0.23;
    
    if(dia>7)
    {
        if(distancia>800)
        {
            costo=costo-(costo*0.3);
        }
    }
    printf("el costo del boleto es: %.2f\n", costo);
    
    return 0;
}
