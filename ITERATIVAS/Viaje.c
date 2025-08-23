#include <stdio.h>

int main() {
    int viajes, i;
    int personas, totalPersonas = 0;
    double peso, totalPeso = 0;

    printf("Ingrese la cantidad de viajes realizados en el dia: ");
    scanf("%d", &viajes);

    for (i = 1; i <= viajes; i++) {
        printf("\nViaje %d:\n", i);
        printf("Cantidad de personas: ");
        scanf("%d", &personas);
        printf("Peso del viaje (kg): ");
        scanf("%lf", &peso);

        totalPersonas += personas;
        totalPeso += peso;
    }

    double promedioPersonas = (viajes > 0) ? (double)totalPersonas / viajes : 0;
    double promedioPeso = (viajes > 0) ? totalPeso / viajes : 0;

    printf("\n\n\tESTADISTICA DEL DIA\n");
    printf("CANTIDAD DE VIAJES: %d\n", viajes);
    printf("CANTIDAD DE PERSONAS TRANSPORTADAS: %d\n", totalPersonas);
    printf("PESO TRANSPORTADO (KILOS): %.2lf\n", totalPeso);
    printf("PROMEDIO DE PERSONAS POR VIAJE: %.2lf\n", promedioPersonas);
    printf("PROMEDIO DE PESO POR VIAJE: %.2lf\n", promedioPeso);

    return 0;
}
