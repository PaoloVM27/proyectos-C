#include <stdio.h>
#define c 2.99792458e10 // Velocidad de la luz

int main() {
    double masa, energia;

    printf("Ingrese masa en gramos: ");
    scanf("%lf", &masa);

    energia = masa * c * c;

    printf("Cantidad de energia producida: %e ergios\n", energia);

    return 0;
}