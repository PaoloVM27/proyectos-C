#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2) {
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    return distancia;
}

int main() {
    float x1, y1, z1; 
    float x2, y2, z2; 
    float distancia;
    
    printf("Ingrese las coordenadas del primer punto:\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("z1: ");
    scanf("%f", &z1);
    
    printf("\nIngrese las coordenadas del segundo punto:\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    printf("z2: ");
    scanf("%f", &z2);
    
    printf("\nPunto 1: (%.2f, %.2f, %.2f)\n", x1, y1, z1);
    printf("Punto 2: (%.2f, %.2f, %.2f)\n", x2, y2, z2);
    
    distancia = calcularDistancia(x1, y1, z1, x2, y2, z2);
    
    printf("\nLa distancia entre los dos puntos es: %.4f\n", distancia);
    
    return 0;
}