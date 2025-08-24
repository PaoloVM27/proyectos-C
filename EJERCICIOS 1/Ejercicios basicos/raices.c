#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, raiz1, raiz2, parteReal, parteImaginaria;
    
    printf("Ecuacion ax² + bx + c = 0\n\n");
    
    printf("Ingrese el coeficiente a: ");
    scanf("%f", &a);
    
    printf("Ingrese el coeficiente b: ");
    scanf("%f", &b);
    
    printf("Ingrese el coeficiente c: ");
    scanf("%f", &c);
    
    printf("\nEcuacion: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    
    if (a == 0) {
        printf("Error: El coeficiente 'a' no puede ser cero.\n");
        printf("Esta no es una ecuacion cuadratica.\n");
        return 1;
    }
    
    discriminante = b * b - 4 * a * c;
    
    printf("Discriminante (Δ) = %.2f\n", discriminante);
    
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        
        printf("Las raices son reales y diferentes:\n");
        printf("x₁ = %.2f\n", raiz1);
        printf("x₂ = %.2f\n", raiz2);
    }
    else if (discriminante == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        
        printf("Las raices son reales e iguales:\n");
        printf("x₁ = x₂ = %.2f\n", raiz1);
    }
    else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);
        
        printf("Las raices son complejas conjugadas:\n");
        printf("x₁ = %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("x₂ = %.2f - %.2fi\n", parteReal, parteImaginaria);
    }
    
    return 0;
}