#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double radio, volumen, area;
    
    printf("=== CALCULADORA DE ESFERA ===\n\n");
    
    printf("Ingrese el radio de la esfera: ");
    scanf("%lf", &radio);
    
    if (radio <= 0) {
        printf("Error: El radio debe ser un valor positivo\n");
        return 1;
    }
    
    volumen = (4.0 / 3.0) * PI * pow(radio, 3);
    area = 4.0 * PI * pow(radio, 2);
    
    printf("\n=== RESULTADOS ===\n");
    printf("Radio: %.4f unidades\n", radio);
    printf("Volumen: %.4f unidades cúbicas\n", volumen);
    printf("Área superficial: %.4f unidades cuadradas\n", area);
    
    return 0;
}