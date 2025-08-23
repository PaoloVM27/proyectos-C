#include <stdio.h>

int main() {
    int numero, digitos[5];
    int suma = 0, multiplicador = 2, residuo, verificador;

    printf("Ingrese un numero de 5 cifras: ");
    scanf("%d", &numero);

    if (numero < 10000 || numero > 99999) {
        printf("Error: El numero debe tener exactamente 5 cifras.\n");
        return 1; 
    }

    for (int i = 4; i >= 0; i--) {
        digitos[i] = numero % 10;
        numero /= 10;
    }

    for (int i = 4; i >= 0; i--) {
        suma += digitos[i] * multiplicador;
        multiplicador++;
        if (multiplicador > 7) 
            multiplicador = 2;
    }

    printf("La suma de los productos es: %d\n", suma);

    residuo = suma % 11;

    if (residuo == 0 || residuo == 1) {
        verificador = residuo;
    } else {
        verificador = 11 - residuo;
    }

    printf("El digito verificador es: %d\n", verificador);

    return 0;
}
