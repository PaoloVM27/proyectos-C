#include <stdio.h>
#include <math.h>

double calcularPotencia(double base, int exponente);

int main() {
    double Y[10];  
    int X[10];   
    double Z[10];  
    
    printf("\t\tPOTENCIA Z = Y^X\t\t\n");
    printf("Nota: Ingrese 10 pares de valores para Y y X\n\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Par %d:\n", i + 1);
        printf("Ingrese Y (base, numero real): ");
        scanf("%lf", &Y[i]);
        printf("Ingrese X (exponente, numero entero): ");
        scanf("%d", &X[i]);
        
        Z[i] = calcularPotencia(Y[i], X[i]);
        printf("\n");
    }
    
    printf("\n\n\t\tTABLA DE RESULTADOS\n");
    printf("=================================================\n");
    printf("  Par N°  |    Y    |    X    |      Z = Y^X     \n");
    printf("=================================================\n");
    
    for (int i = 0; i < 10; i++) {
        printf("    %2d      %5.2f  %7d %17.2f \n", 
               i + 1, Y[i], X[i], Z[i]);
    }
    printf("=================================================\n");
    
    return 0;
}

double calcularPotencia(double base, int exponente) {
    if (exponente == 0) {
        return 1.0; 
    }
    
    return pow(base, exponente);
}