#include <stdio.h>

int main() {
    float x, y;
    
    printf("=== CALCULADORA DE ECUACION ===\n");
    printf("Ecuacion: Y = 3X² + 7X - 15\n\n");
    
    printf("Ingrese el valor de X: ");
    scanf("%f", &x);
    
    y = 3 * x * x + 7 * x - 15;
    
    printf("\n=== RESULTADO ===\n");
    printf("Para X = %.2f\n", x);
    printf("Y = 3(%.2f)² + 7(%.2f) - 15\n", x, x);
    printf("Y = %.2f\n", y);
    
    return 0;
}