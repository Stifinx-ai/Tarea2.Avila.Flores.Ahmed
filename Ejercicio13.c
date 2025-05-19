//Crear un codigo en c tal que dado como entrada un arreglo unidimensional de enteros obtenga como resultado la suma de los mismos.


#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int suma = 0;
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    printf("La suma es: %d\n", suma);
    return 0;
}
