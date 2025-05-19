//Escribir un codigo tal que dado como entrada un arreglo unidimensional de enteros, determinar cuantos de ellos son positivos, negativos o nulos

#include <stdio.h>

int main() {
    int arreglo[] = {0, -14, 85, 74, 9, 45, -158};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int positivos = 0, negativos = 0, nulos = 0;

    for (int i = 0; i < n; i++) {
        if (arreglo[i] > 0)
            positivos++;
        else if (arreglo[i] < 0)
            negativos++;
        else
            nulos++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);
    return 0;
}
