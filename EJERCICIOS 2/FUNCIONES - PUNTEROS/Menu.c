#include <stdio.h>
#include <stdlib.h>

void menu();
long long factorial(int n);
void cargarYOrdenar();

int main() {
    int opcion, num;
    long long fact;

    do {
        menu();
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("El numero debe ser positivo.\n");
                } else {
                    fact = factorial(num);
                    printf("El factorial de %d es: %lld\n", num, fact);
                }
                break;
            case 2:
                cargarYOrdenar();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}

void menu() {
    printf("\n\t\t\tMENU\t\t\t\n");
    printf("1. Factorial de un numero entero positivo\n");
    printf("2. Cargar y ordenar en orden descendente un vector de diez elementos\n");
    printf("3. Salir\n");
    printf("******************************\n");
}

long long factorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void cargarYOrdenar() {
    int v[10], i, j, aux;

    printf("Ingrese 10 numeros enteros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("Vector ordenado en orden descendente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
