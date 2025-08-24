#include <stdio.h>
#include <math.h>

int main() {
    double angulo_radianes;
    
    printf("Ingrese el ángulo en radianes: ");
    scanf("%lf", &angulo_radianes);
    
    double tangente = tan(angulo_radianes);
    double cotangente = 1.0 / tangente;
    double secante = 1.0 / cos(angulo_radianes);
    double cosecante = 1.0 / sin(angulo_radianes);
    
    printf("\nResultados para el ángulo %.4f radianes:\n", angulo_radianes);
    printf("Tangente: %.6f\n", tangente);
    printf("Cotangente: %.6f\n", cotangente);
    printf("Secante: %.6f\n", secante);
    printf("Cosecante: %.6f\n", cosecante);
    
    return 0;
}