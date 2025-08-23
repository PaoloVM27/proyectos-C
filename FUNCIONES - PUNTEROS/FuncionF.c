#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long long calcular_combinacion(int x, int y) {
    if (x < 0 || y < 0 || y > x) {
        return -1; 
    }
    
    return factorial(x) / (factorial(y) * factorial(x - y));
}

int main() {
    int x, y;
    
    printf("Ingrese el valor de X (debe ser mayor o igual a 0): ");
    scanf("%d", &x);
    
    if (x < 0) {
        printf("Error: X debe ser un numero no negativo.\n");
        return 1;
    }
    
    printf("Ingrese el valor de Y (0 <= Y <= %d): ", x);
    scanf("%d", &y);
    
    if (y < 0 || y > x) {
        printf("Error: Y debe estar entre 0 y %d.\n", x);
        return 1;
    }
    
    long long resultado = calcular_combinacion(x, y);
    
    printf("\n=== RESULTADO ===\n");
    printf("C(%d, %d) = %d! / (%d! * %d!) = %lld\n", 
           x, y, x, y, x - y, resultado);
    
    return 0;
}