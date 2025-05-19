//construya un programa tal que dado como entrada un arreglo unidimensional de enteros y un número entero, determine cuantás veces se encuentra el número dentro del arreglo.

#include <stdio.h>

int main() {
    int arreglo[] = {7, 8, 19, 4, 7, 17, 3};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero = 7;
    int contador = 0;

    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    printf("El número %d aparece %d veces\n", numero, contador);
    return 0;
}
