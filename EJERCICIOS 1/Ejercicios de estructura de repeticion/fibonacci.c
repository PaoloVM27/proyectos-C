#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int a = 0, b = 1, siguiente;

    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error, ingrese un numero no negativo.\n");
        return 1;
    }

    printf("Serie de Fibonacci hasta %d:\n", n);

    for (i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%llu", a);
        } else if (i == 1) {
            printf(", %llu", b);
        } else {
            siguiente = a + b;
            printf(", %llu", siguiente);
            a = b;
            b = siguiente;
        }
    }

    printf("\n");

    return 0;
}
