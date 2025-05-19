//Hacer un codigo que calcule e imprima el producto de los "n" primeros numeros naturales


#include <stdio.h>

int main() {
    int n;
    int a=1;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }

    printf("El producto de los primeros números naturales es: %d\n", a);

    return 0;
}
