#include <stdio.h>

#define CANTIDAD 20

int main() {
    int numeros[CANTIDAD];
    int suma = 0;
    float media;
    
    printf("Ingrese %d numeros enteros:\n", CANTIDAD);
    
    for (int i = 0; i < CANTIDAD; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        suma += numeros[i];
    }
    
    media = (float)suma / CANTIDAD;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Numeros ingresados: ");
    for (int i = 0; i < CANTIDAD; i++) {
        printf("%d", numeros[i]);
        if (i < CANTIDAD - 1) printf(", ");
    }
    
    printf("\n\nSuma total: %d\n", suma);
    printf("Media aritmetica: %.2f\n", media);
    
    return 0;
}