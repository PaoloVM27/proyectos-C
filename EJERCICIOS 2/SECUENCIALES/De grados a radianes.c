#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double grados_a_radianes(double grados) {
    return grados * PI / 180.0;
}

double radianes_a_grados(double radianes) {
    return radianes * 180.0 / PI;
}

int main() {
    double angulo_grados;
    
    printf("Ingrese el ángulo en grados: ");
    scanf("%lf", &angulo_grados);
    
    double angulo_radianes = grados_a_radianes(angulo_grados);
    
    double seno_valor = sin(angulo_radianes);
    double coseno_valor = cos(angulo_radianes);
    double arctan_valor = atan(seno_valor/coseno_valor); 
    
    double arctan_grados = radianes_a_grados(arctan_valor);
    
    if (coseno_valor < 0) {
        arctan_grados += 180;
    } else if (seno_valor < 0) {
        arctan_grados += 360;
    }
    
    printf("\n----------- RESULTADOS PARA %.2f° -----------\n", angulo_grados);
    printf("Ángulo en radianes: %.6f rad\n", angulo_radianes);
    printf("Seno:               %.6f\n", seno_valor);
    printf("Coseno:             %.6f\n", coseno_valor);
    printf("Arco-tangente:      %.6f rad\n", arctan_valor);
    
    return 0;
}