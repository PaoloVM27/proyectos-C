#include <stdio.h>

int main() {
    float ancho, largo, metro_cuadrado, costo;

    printf("Ingrese ancho del terreno: ");
    fflush(stdout);  
    scanf("%f", &ancho);

    printf("Ingrese largo del terreno: ");
    fflush(stdout);
    scanf("%f", &largo);

    printf("Ingrese el costo de un metro cuadrado del terreno: ");
    fflush(stdout);
    scanf("%f", &metro_cuadrado);

    costo = ancho * largo * metro_cuadrado;

    printf("El costo del terreno es: %.2f\n", costo);

    return 0;
}