#include <stdio.h>

int main() {
    double inversionMensual, tasa, saldo = 0;
    char opcion;

    printf("Ingrese la inversion mensual: ");
    scanf("%lf", &inversionMensual);

    printf("Ingrese la tasa de interes mensual (en %%): ");
    scanf("%lf", &tasa);

    tasa = tasa / 100.0; 

    int anio = 1;
    do {
        for (int mes = 1; mes <= 12; mes++) {
            saldo = (saldo + inversionMensual) * (1 + tasa);
        }

        printf("Saldo tras %d anio(s): %.15lf\n", anio, saldo);

        printf("Desea procesar un anio mas? (S/N): ");
        scanf(" %c", &opcion);

        anio++;

    } while (opcion == 'S' || opcion == 's');

    return 0;
}
