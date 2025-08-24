#include <stdio.h>

int main() {
    int n, suma = 0;
    
    printf("Ingrese un numero par N: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Error: El numero debe ser mayor o igual a 2.\n");
        return 1;
    }
    
    if (n % 2 != 0) {
        printf("Error: El numero debe ser par.\n");
        return 1;
    }
    
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    
    printf("La suma de los numeros pares desde 2 hasta %d es: %d\n", n, suma);
    
    return 0;
}