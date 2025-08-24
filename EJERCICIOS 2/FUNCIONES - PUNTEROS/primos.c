#include <stdio.h>
#include <stdbool.h>


bool esPrimo(int numero);

int main() {
    int contador = 0;
    int numero = 2; 
    
    printf("=== LOS 10 PRIMEROS NUMEROS PRIMOS ===\n\n");
    printf("┌──────┬──────────────┐\n");
    printf("│  No. │ Numero Primo │\n");
    printf("├──────┼──────────────┤\n");
    
    while (contador < 10) {
        if (esPrimo(numero)) {
            contador++;
            printf("│  %2d  │     %4d     │\n", contador, numero);
        }
        numero++;
    }
    
    printf("└──────┴──────────────┘\n");
    
    return 0;
}


bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; 
    }
    if (numero == 2) {
        return true; 
    }
    if (numero % 2 == 0) {
        return false;
    }
    
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false; 
        }
    }
    
    return true; 
}