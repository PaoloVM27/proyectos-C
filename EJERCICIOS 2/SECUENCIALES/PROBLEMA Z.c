#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double w, Z;
    
    printf("Ingrese el valor de w: ");
    scanf("%lf", &w);
    
    double constante = 1.0 / sqrt(2.0 * PI);
    double exponente = - (w * w) / 2.0;
    Z = constante * exp(exponente);
    
    printf("\n=== RESULTADO ===\n");
    printf("w = %.6f\n", w);
    printf("Constante: 1/√(2π) = %.6f\n", constante);
    printf("Exponente: -w²/2 = %.6f\n", exponente);
    printf("Z = %.8f\n", Z);
    
    return 0;
}