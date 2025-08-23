#include <stdio.h>
#include <stdbool.h>

long potencia(int base, int exponente);
bool validarEntrada(int exponente);
void leerDatos(int *base, int *exponente);

int main() {
    int base, exp;
    long resultado;
    
    printf("CALCULO DE POTENCIAS:\n");
    
    leerDatos(&base, &exp);
    
    if (!validarEntrada(exp)) {
        printf("Error: El exponente debe ser mayor o igual a 0.\n");
        return 1;
    }
    
    resultado = potencia(base, exp);
    
    printf("\nResultado: %d^%d = %ld\n\n", base, exp, resultado);
    
    return 0;
}

void leerDatos(int *base, int *exponente) {
    printf("\nIngrese la base: ");
    scanf("%d", base);
    
    printf("Ingrese el exponente: ");
    scanf("%d", exponente);
}

bool validarEntrada(int exponente) {
    return (exponente >= 0);
}

long potencia(int base, int exponente) {
    if (exponente == 0) return 1;
    
    long resultado = 1;
    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }
    return resultado;
}