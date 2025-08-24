#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, e, f;
    float x, y, denominador;
    
    printf("Sistema de ecuaciones:\n");
    printf("ax + by = c\n");
    printf("dx + ey = f\n\n");
    
    printf("Ingrese el coeficiente a: ");
    scanf("%f", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%f", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%f", &c);
    printf("Ingrese el coeficiente d: ");
    scanf("%f", &d);
    printf("Ingrese el coeficiente e: ");
    scanf("%f", &e);
    printf("Ingrese el coeficiente f: ");
    scanf("%f", &f);
    
    denominador = a * e - b * d;
    
    printf("\nSistema de ecuaciones:\n");
    printf("%.2fx + %.2fy = %.2f\n", a, b, c);
    printf("%.2fx + %.2fy = %.2f\n", d, e, f);
    

    if (fabs(denominador) > 0.0001) { 
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;
        
        printf("\nEl sistema tiene solucion unica:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
        
    } else {
        printf("\nEl sistema no tiene solucion unica.\n");
        printf("El determinante (a*e - b*d) = %.2f es cero o muy cercano a cero.\n", denominador);
    }
    
    return 0;
}