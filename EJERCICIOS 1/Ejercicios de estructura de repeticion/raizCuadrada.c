#include <stdio.h>

int main() {
    double numero, errorMax, low, high, mid;
    
    printf("Ingrese un numero entero positivo: ");
    scanf("%lf", &numero);

    printf("Ingrese el error maximo permitido: ");
    scanf("%lf", &errorMax);

    if (numero < 0) {
        printf("Error: No se puede calcular la raiz cuadrada de un numero negativo.\n");
        return 1;
    }

    low = 0;
    high = numero >= 1 ? numero : 1; 

    while ((high - low) > errorMax) {
        mid = (low + high) / 2;

        if (mid * mid > numero)
            high = mid;
        else
            low = mid;
    }

    printf("Raiz cuadrada aproximada de %.2lf = %.10lf\n", numero, (low + high) / 2);

    return 0;
}
