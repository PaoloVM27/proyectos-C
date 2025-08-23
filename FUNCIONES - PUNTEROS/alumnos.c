#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 100
#define LONG_NOMBRE 50

struct Alumno {
    char nombre[LONG_NOMBRE];
    float promedio;
};

int main() {
    struct Alumno alumnos[MAX_ALUMNOS];
    int cantidad = 0;
    int opcion;
    
    do {
        printf("\n    GESTION DE ALUMNOS    \n");
        printf("1. Ingresar alumno\n");
        printf("2. Mostrar todos los alumnos\n");
        printf("3. Buscar alumno por nombre\n");
        printf("4. Mostrar promedio general del curso\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                if (cantidad < MAX_ALUMNOS) {
                    printf("\n    Ingresar nuevo alumno    \n");
                    printf("Nombre: ");
                    scanf("%s", alumnos[cantidad].nombre);
                    printf("Promedio final: ");
                    scanf("%f", &alumnos[cantidad].promedio);
                    cantidad++;
                    printf("Alumno agregado correctamente.\n");
                } else {
                    printf("No se pueden agregar mas alumnos. Capacidad maxima alcanzada.\n");
                }
                break;
                
            case 2: 
                printf("\n    Lista de alumnos    \n");
                if (cantidad == 0) {
                    printf("No hay alumnos registrados.\n");
                } else {
                    for (int i = 0; i < cantidad; i++) {
                        printf("%d. %s - Promedio: %.2f\n", i+1, alumnos[i].nombre, alumnos[i].promedio);
                    }
                }
                break;
                
            case 3:
                printf("\n    Buscar alumno    \n");
                if (cantidad == 0) {
                    printf("No hay alumnos registrados.\n");
                } else {
                    char nombreBuscar[LONG_NOMBRE];
                    printf("Ingrese nombre a buscar: ");
                    scanf("%s", nombreBuscar);
                    
                    int encontrado = 0;
                    for (int i = 0; i < cantidad; i++) {
                        if (strcmp(alumnos[i].nombre, nombreBuscar) == 0) {
                            printf("Alumno encontrado: %s - Promedio: %.2f\n", alumnos[i].nombre, alumnos[i].promedio);
                            encontrado = 1;
                            break;
                        }
                    }
                    if (!encontrado) {
                        printf("Alumno no encontrado.\n");
                    }
                }
                break;
                
            case 4: 
                printf("\n   Estadisticas del curso   \n");
                if (cantidad == 0) {
                    printf("No hay alumnos registrados.\n");
                } else {
                    float suma = 0;
                    for (int i = 0; i < cantidad; i++) {
                        suma += alumnos[i].promedio;
                    }
                    float promedioGeneral = suma / cantidad;
                    printf("Promedio general del curso: %.2f\n", promedioGeneral);
                    printf("Total de alumnos: %d\n", cantidad);
                }
                break;
                
            case 5: 
                printf("Saliendo del sistema...\n");
                break;
                
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
        
    } while (opcion != 5);
    
    return 0;
}