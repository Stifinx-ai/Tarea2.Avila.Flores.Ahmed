//Una persona invierte en un banco una determinada cantidad de dinero y a una certa tasa de interes mensual
//construya un codigo en c. que permita obtener el monto de dinero que se obtendrá al finalizar el mes.

#include <stdio.h>

int main()
{
    int i;
    int m;
    float inv;
    float interes;
    float ganancia=0;
    
    printf("Ingrese el monto a invertir:\n");
    scanf("%f", &inv);
    
    printf("Ingrese el porcentaje de ganancia:\n");
    scanf("%f", &interes);
    
    printf("Ingrese el tiempo a invertir (meses):\n");
    scanf("%d", &m);
    
    for(i=0; i<=m; i++)
    {
        interes=interes/100;
        inv=inv+(inv*interes);
        ganancia=ganancia+(inv*interes);
    }
    
    printf("El dinero total será: %f\n", inv);
    printf("La ganancia es: %f\n", ganancia);
    
    return 0;
}
