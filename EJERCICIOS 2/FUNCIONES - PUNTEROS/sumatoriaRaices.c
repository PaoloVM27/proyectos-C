#include <stdio.h>
#include <math.h>

double calcularSumatoriaRaices();

int main() {
    printf("   SUMATORIA DE RAICES CUADRADAS DE NUMEROS PARES   \n\n");
    printf("Nota: Sumatoria de los numeros pares desde 2 hasta 1500\n\n");
    
    double resultado = calcularSumatoriaRaices();
    
    printf("La sumatoria de las raices cuadradas es: %.6f\n\n", resultado);
    
    return 0;
}

double calcularSumatoriaRaices() {
    double sumatoria = 0.0;
    
    for (int i = 2; i <= 1500; i += 2) {
        sumatoria += sqrt(i);
    }
    
    return sumatoria;
}