//construir un codigo tal que dado el radio de un círculo, calcule e imprima el área y la circunferencia.
#include <stdio.h>

int main()
{
    float r;
    float area;
    float circunferencia;
    float pi=3.1416;
    
    printf("inscriba radio del circulo:\n");
    scanf("%f", &r);
    
    circunferencia=2*r*pi;
    area=r*r*pi;
    
    printf("La circunferencia es: %.4f\n", circunferencia);
    printf("El área es: %.4f\n", area);

    return 0;
}
