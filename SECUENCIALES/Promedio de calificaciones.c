#include <stdio.h>

int main(){
    char nombre[20];
    float nota1, nota2, nota3, nota4, notaFinal;

    printf("Ingresar nombre del estudiante: ");
    scanf("%19[^\n]", nombre);

    while(getchar() != '\n');

    printf("Ingrese la calificación N°1: ");
    scanf("%f", &nota1);

    while(getchar() != '\n');

    printf("Ingrese la calificación N°2: ");
    scanf("%f", &nota2);

    while(getchar() != '\n');

    printf("Ingrese la calificación N°3: ");
    scanf("%f", &nota3);

    while(getchar() != '\n');

    printf("Ingrese la calificación N°4: ");
    scanf("%f", &nota4);

    notaFinal = nota1 * 0.3 + nota2 * 0.2 + nota3 * 0.1 + nota4 * 0.4;

    printf("El promedio de calificaciones del alumno %s es: %.2f", nombre, notaFinal);

    return 0;
}