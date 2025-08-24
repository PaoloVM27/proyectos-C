#include <stdio.h>

void calcularSumatoriaCuadrados(int n, long long *resultado);

int main() {
    int N;
    long long sumatoria;
    
    printf("SUMATORIA DE CUADRADOS DESDE EL 1 HASTA N\n\n");
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Error: N debe ser un numero entero positivo.\n");
        return 1;
    }
    
    calcularSumatoriaCuadrados(N, &sumatoria);
    
    printf("\nLa sumatoria de los cuadrados de 1 a %d es: %lld\n", N, sumatoria);
    
    return 0;
}

void calcularSumatoriaCuadrados(int n, long long *resultado) {
    *resultado = 0; 
    
    for (int i = 1; i <= n; i++) {
        *resultado += (long long)i * i; 
    }
}