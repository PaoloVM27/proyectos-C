#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1;
    } else {
        if (numero < 0) {
            numero = -numero;
        }

        while (numero > 0) {
            numero /= 10;
            contador++;
        }
    }

    printf("El numero tiene %d digitos.\n", contador);

    return 0;
}
