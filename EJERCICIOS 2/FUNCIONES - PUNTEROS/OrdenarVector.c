#include <stdio.h>

int main() {
    int n;
    
    printf("ORDENAR VECTOR DE MENOR A MAYOR:\n\n");
    
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    
    int vector[n];
    
    printf("\nIngrese los %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    printf("\nVector original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    
    printf("Vector ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    
    return 0;
}