#include <stdio.h>
#include <stdbool.h>

bool esVectorSimetrico(int vector[], int n);

int main() {
    int n;
    
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Error: El tamaño debe ser positivo.\n");
        return 1;
    }
    
    int vector[n];
    
    printf("\nIngrese los %d elementos del vector:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    if (esVectorSimetrico(vector, n)) {
        printf("\n¡El vector ES simétrico!\n");
    } else {
        printf("\nEl vector NO es simétrico.\n");
    }
    
    printf("\nVector ingresado: [");
    for (int i = 0; i < n; i++) {
        printf("%d", vector[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    
    return 0;
}

bool esVectorSimetrico(int vector[], int n) {
    if (n <= 1) {
        return true;
    }
    
    for (int i = 0; i < n / 2; i++) {
        if (vector[i] != vector[n - 1 - i]) {
            return false;
        }
    }
    
    return true;
}