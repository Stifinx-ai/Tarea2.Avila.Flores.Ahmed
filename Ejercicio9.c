//Haga un codigo para obtener la tabla de multiplicar de un nuemero entero N, comenzando desde 1

#include <stdio.h>

int main() {
    int N, a;

    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &N);
    
    printf("ingrese hasta que número quiere su tabla de multiplicar: ");
    scanf("%d" , &a);

    for (int i = 1; i <= a; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
