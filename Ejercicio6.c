//Dado como dato el sueldo de un trabajador considere un aumento del 15% si un sueldo es inferior a 1000 y de un 12% en caso contrario.

#include <stdio.h>

int main()
{
    float n;
    
    printf("ingrese el sueldo del trabajador:\n");
    scanf("%f", &n);
    
    if(n<1000) 
    {
        n=n+(n*0.15);
    }
    else
    {
        n=n+(n*0.12);
    }
    
    printf("El sueldo del trabajador será: %.2f\n", n);

    return 0;
}
