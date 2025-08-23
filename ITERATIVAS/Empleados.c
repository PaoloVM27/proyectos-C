#include <stdio.h>

#define Emp 100

int main() {
    char nombre[Emp][30];
    float sueldoAnterior[Emp], sueldoActual[Emp];
    int tipo[Emp];
    int n, i;
    float totalAnterior = 0, totalActual = 0;

    printf("Ingrese el número de empleados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmpleado %d:\n", i+1);

        printf("Nombre: ");
        scanf("%s", nombre[i]);

        printf("Sueldo anterior: ");
        scanf("%f", &sueldoAnterior[i]);

        printf("Tipo de empleado (1-5): ");
        scanf("%d", &tipo[i]);

        float incremento = 0;
        switch (tipo[i]) {
            case 1: incremento = 0.05; break;
            case 2: incremento = 0.07; break;
            case 3: incremento = 0.10; break;
            case 4: incremento = 0.14; break;
            case 5: incremento = 0.18; break;
            default: incremento = 0; break;
        }

        sueldoActual[i] = sueldoAnterior[i] * (1 + incremento);

        totalAnterior += sueldoAnterior[i];
        totalActual += sueldoActual[i];
    }

    printf("\n\n                AUMENTOS DE SUELDOS                  \n");
    printf("-------------------------------------------------------\n");
    printf("NOMBRE                SUELDO ANTERIOR    SUELDO ACTUAL\n");
    printf("-------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-20s %14.2f %14.2f\n",
               nombre[i],
               sueldoAnterior[i],
               sueldoActual[i]);
    }

    printf("-------------------------------------------------------\n");
    printf("TOTAL                 %14.2f %14.2f\n", totalAnterior, totalActual);

    return 0;
}
