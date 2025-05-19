//Construir un diagrama de flujo para almacenar en un arreglo unidimensional lo 100 primeros números pares. imprimir el final del arreglo.


#include <stdio.h>

int main() {
    int arreglo[100];
    int numero = 0;

    for (int i = 0; i < 100; i++) {
        arreglo[i] = numero;
        numero += 2;
    }

    printf("Primeros 100 números pares:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arreglo[i]);
    }

    printf("\n");
    return 0;
}
