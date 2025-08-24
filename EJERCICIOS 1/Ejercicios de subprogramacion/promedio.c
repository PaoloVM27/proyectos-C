#include <stdio.h>

float calcularPromedio(float notas[], int cantidad) {
    float suma = 0.0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}

void estadoAlumno(float promedio) {
    if (promedio > 6) {
        printf("Estado: Aprobado\n");
    } else if (promedio >= 4 && promedio <= 6) {
        printf("Estado: Verificación Suplementaria\n");
    } else {
        printf("Estado: Reprobado\n");
    }
}

int main() {
    int n;
    printf("Ingrese la cantidad de notas del alumno: ");
    scanf("%d", &n);

    float notas[n];
    for (int i = 0; i < n; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float promedio = calcularPromedio(notas, n);
    printf("\nPromedio del alumno: %.2f\n", promedio);
    estadoAlumno(promedio);

    return 0;
}
