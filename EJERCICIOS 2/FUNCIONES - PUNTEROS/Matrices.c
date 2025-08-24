#include <stdio.h>
#include <stdlib.h>

void menu();
void cargarMatriz(int filas, int columnas, int matriz[filas][columnas], char nombre);
void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas]);
void restarMatrices(int filas, int columnas, int A[filas][columnas], int B[filas][columnas], int R[filas][columnas]);

int main() {
    int opcion;
    int m, n;

    do {
        menu();
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                printf("Ingrese el numero de filas: ");
                scanf("%d", &m);
                printf("Ingrese el numero de columnas: ");
                scanf("%d", &n);

                int A[m][n], B[m][n], R[m][n];

                printf("\n--- Cargar Matriz A ---\n");
                cargarMatriz(m, n, A, 'A');

                printf("\n--- Cargar Matriz B ---\n");
                cargarMatriz(m, n, B, 'B');

                restarMatrices(m, n, A, B, R);

                printf("\nMatriz A:\n");
                mostrarMatriz(m, n, A);

                printf("\nMatriz B:\n");
                mostrarMatriz(m, n, B);

                printf("\nResultado (A - B):\n");
                mostrarMatriz(m, n, R);
                break;
            }
            case 2: {
                printf("Saliendo del programa...\n");
                break;
            }
            default: {
                printf("Opcion invalida. Intente de nuevo.\n");
            }
        }

    } while(opcion != 2);

    return 0;
}

void menu() {
    printf("\n----------------- MENU -----------------\n");
    printf("1. Cargar y restar dos matrices A - B\n");
    printf("2. Salir\n");
    printf("------------------------------------------\n");
}

void cargarMatriz(int filas, int columnas, int matriz[filas][columnas], char nombre) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%c[%d][%d]: ", nombre, i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void restarMatrices(int filas, int columnas, int A[filas][columnas], int B[filas][columnas], int R[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            R[i][j] = A[i][j] - B[i][j];
        }
    }
}
