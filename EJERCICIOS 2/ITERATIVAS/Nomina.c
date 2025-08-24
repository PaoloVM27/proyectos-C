#include <stdio.h>
#include <string.h>

#define MAX 100

float calcularBonificacion(float sueldoMensual, int antiguedad) {
    if (antiguedad > 2) {
        return sueldoMensual * 0.02 * (antiguedad - 2);
    }
    return 0;
}

float calcularImpuesto(float sdoBruto) {
    float impuesto = 0;
    if (sdoBruto >= 1 && sdoBruto <= 300)
        impuesto = 30 + (sdoBruto - 1) * 0.03;
    else if (sdoBruto <= 700)
        impuesto = 50 + (sdoBruto - 301) * 0.08;
    else if (sdoBruto <= 1100)
        impuesto = 100 + (sdoBruto - 701) * 0.11;
    else if (sdoBruto <= 1700)
        impuesto = 150 + (sdoBruto - 1101) * 0.16;
    else
        impuesto = 200 + (sdoBruto - 1701) * 0.20;

    return impuesto;
}

int main() {
    int n, i;
    char nombre[MAX][50];
    float sueldoMensual[MAX], sdoBruto[MAX], impuesto[MAX], sdoNeto[MAX];
    int antiguedad[MAX];
    float totalBruto = 0, totalImpuesto = 0, totalNeto = 0;

    printf("Ingrese el numero de empleados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nIngrese nombre del empleado %d: ", i + 1);
        scanf("%s", nombre[i]);
        printf("Ingrese sueldo mensual: ");
        scanf("%f", &sueldoMensual[i]);
        printf("Ingrese antiguedad (anios): ");
        scanf("%d", &antiguedad[i]);

        float bonificacion = calcularBonificacion(sueldoMensual[i], antiguedad[i]);
        sdoBruto[i] = (sueldoMensual[i] / 2) + bonificacion;
        impuesto[i] = calcularImpuesto(sdoBruto[i]);
        sdoNeto[i] = sdoBruto[i] - impuesto[i];

        totalBruto += sdoBruto[i];
        totalImpuesto += impuesto[i];
        totalNeto += sdoNeto[i];
    }

    printf("\n==================== NOMINA QUINCENAL ====================\n");
    printf("%-15s %-15s %-15s %-15s\n", "NOMBRE", "SDO. BRUTO", "IMPUESTO", "SDO. NETO");
    printf("----------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-15s %-15.2f %-15.2f %-15.2f\n", 
               nombre[i], sdoBruto[i], impuesto[i], sdoNeto[i]);
    }

    printf("----------------------------------------------------------\n");
    printf("%-15s %-15.2f %-15.2f %-15.2f\n", 
           "TOTAL", totalBruto, totalImpuesto, totalNeto);
    printf("==========================================================\n");

    return 0;
}
