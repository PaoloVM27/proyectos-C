#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 50
#define MAX_CURSOS 20
#define MAX_NOMBRE 50
#define MAX_CURSO 50

int main() {
    int numAlumnos, numCursos, i, j, k;
    char nombres[MAX_ALUMNOS][MAX_NOMBRE];
    char cursos[MAX_ALUMNOS][MAX_CURSOS][MAX_CURSO];
    float calificaciones[MAX_ALUMNOS][MAX_CURSOS][3];
    float promedioCurso[MAX_ALUMNOS][MAX_CURSOS];
    char observacion[MAX_ALUMNOS][MAX_CURSOS][12]; 

    float promedioAlumno[MAX_ALUMNOS];
    int totalCursosAlumno[MAX_ALUMNOS];

    int totalAlumnos = 0;
    float sumaPromedios = 0;

    printf("Ingrese numero de alumnos: ");
    scanf("%d", &numAlumnos);
    getchar();

    for (i = 0; i < numAlumnos; i++) {
        printf("\nIngrese nombre del alumno %d: ", i + 1);
        fgets(nombres[i], MAX_NOMBRE, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;

        printf("Ingrese numero de cursos para %s: ", nombres[i]);
        scanf("%d", &numCursos);
        getchar();

        totalCursosAlumno[i] = numCursos;
        promedioAlumno[i] = 0;

        for (j = 0; j < numCursos; j++) {
            printf("\nIngrese nombre del curso %d: ", j + 1);
            fgets(cursos[i][j], MAX_CURSO, stdin);
            cursos[i][j][strcspn(cursos[i][j], "\n")] = 0;

            float suma = 0;
            for (k = 0; k < 3; k++) {
                printf("Ingrese calificacion %d: ", k + 1);
                scanf("%f", &calificaciones[i][j][k]);
                suma += calificaciones[i][j][k];
            }
            getchar();

            promedioCurso[i][j] = suma / 3.0;

            if (promedioCurso[i][j] >= 11)
                strcpy(observacion[i][j], "APROBADO");
            else
                strcpy(observacion[i][j], "DESAPROBADO");

            promedioAlumno[i] += promedioCurso[i][j];
        }

        promedioAlumno[i] /= numCursos;
        sumaPromedios += promedioAlumno[i];
        totalAlumnos++;
    }

    printf("\n\n\t\t\tREPORTE DE CURSOS\n\n");
    printf("%-20s %-20s %-15s %-15s\n", "NOMBRE", "CURSOS", "CALIF. FINAL", "OBSERVACION");

    for (i = 0; i < numAlumnos; i++) {
        for (j = 0; j < totalCursosAlumno[i]; j++) {
            printf("%-20s %-20s %15.2f %-15s\n",
                   nombres[i],
                   cursos[i][j],
                   promedioCurso[i][j],
                   observacion[i][j]);
        }
        printf("TOTAL ALUMNO %d CURSOS\tPROMEDIO: %.2f\n\n", totalCursosAlumno[i], promedioAlumno[i]);
    }

    printf("TOTAL GENERAL %d ALUMNOS\tPROMEDIO GENERAL: %.2f\n",
           totalAlumnos, sumaPromedios / totalAlumnos);

    return 0;
}
