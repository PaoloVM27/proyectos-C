#include <stdio.h>

#define MAX_INF 100
#define COSTO_MULTA 3.0

int main() {
    char placa[MAX_INF][10];
    int registro[MAX_INF];
    int zona[MAX_INF];
    int limite[MAX_INF];
    int velocidad[MAX_INF];
    float multa[MAX_INF];

    int n, i;

    int totalZona[3] = {0, 0, 0};
    float montoZona[3] = {0, 0, 0};

    printf("Ingrese el número de infracciones: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nInfraccion %d:\n", i+1);

        printf("Placa del vehículo: ");
        scanf("%s", placa[i]);

        printf("Registro del vehículo: ");
        scanf("%d", &registro[i]);

        printf("Zona (1-3): ");
        scanf("%d", &zona[i]);

        printf("Límite de velocidad (km/h): ");
        scanf("%d", &limite[i]);

        printf("Velocidad registrada (km/h): ");
        scanf("%d", &velocidad[i]);

        int exceso = velocidad[i] - limite[i];
        if (exceso > 0)
            multa[i] = exceso * COSTO_MULTA;
        else
            multa[i] = 0;

        int z = zona[i] - 1;
        totalZona[z]++;
        montoZona[z] += multa[i];
    }

    printf("\nVEHÍCULO    REG   VEL   MULTA\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10s %4d %4d %10.2f\n",
               placa[i],
               registro[i],
               velocidad[i],
               multa[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("\nZONA %d : TOTAL DE INFRACCIONES : %d", i+1, totalZona[i]);
        printf("\n        MONTO RECAUDADO EN MULTAS : %.2f\n", montoZona[i]);
    }

    return 0;
}
