#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, w, b, F;
    
    printf("=== CALCULADORA DE FORMULA MATEMATICA ===\n\n");
    
    printf("Ingrese el valor de X (X > 0): ");
    scanf("%lf", &x);
    
    printf("Ingrese el valor de Y: ");
    scanf("%lf", &y);
    
    printf("Ingrese el valor de Z (Z >= 0): ");
    scanf("%lf", &z);
    
    printf("Ingrese el valor de W (W >= 0): ");
    scanf("%lf", &w);
    
    printf("Ingrese el valor de B (B > 0): ");
    scanf("%lf", &b);
    
    if (x <= 0) {
        printf("Error: X debe ser mayor que 0\n");
        return 1;
    }
    if (z < 0 || w < 0) {
        printf("Error: Z y W deben ser mayores o iguales a 0\n");
        return 1;
    }
    if (b <= 0) {
        printf("Error: B debe ser mayor que 0\n");
        return 1;
    }
    
    double termino_superior = 4 * pow(x, 2) * pow(y, 2) * sqrt(2 * z * w);
    termino_superior = pow(termino_superior, 2);  
    
    double termino_inferior = 4 * sqrt(x);        
    double denominador_final = pow(b, 0.75);      
    
    F = termino_superior / (termino_inferior / denominador_final);

    printf("F = %.6f\n", F);
    
    return 0;
}