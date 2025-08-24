#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_NOMBRE 50

float calcularImpuesto(float sueldoBruto, float salarioMinimo) {
    if (sueldoBruto <= salarioMinimo) {
        return 0.0;
    } else if (sueldoBruto <= 3 * salarioMinimo) {
        return (sueldoBruto - salarioMinimo) * 0.05;
    } else {
        float excedente5 = 2 * salarioMinimo;
        float excedente10 = sueldoBruto - (3 * salarioMinimo);
        return (excedente5 * 0.05) + (excedente10 * 0.10);
    }
}

int main() {
    int n, i;
    float salarioMinimo;
    char nombres[MAX][MAX_NOMBRE];
    float sueldoMensual[MAX], sueldoBruto[MAX], impuesto[MAX], sueldoNeto[MAX];
    float totalBruto = 0, totalImpuesto = 0, totalNeto = 0;

    printf("Ingrese salario minimo general: ");
    scanf("%f", &salarioMinimo);

    printf("Ingrese numero de empleados: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nIngrese nombre del empleado %d: ", i + 1);
        fgets(nombres[i], MAX_NOMBRE, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;

        printf("Ingrese sueldo mensual de %s: ", nombres[i]);
        scanf("%f", &sueldoMensual[i]);
        getchar(); 

        sueldoBruto[i] = sueldoMensual[i] / 2.0;
        impuesto[i] = calcularImpuesto(sueldoBruto[i], salarioMinimo);
        sueldoNeto[i] = sueldoBruto[i] - impuesto[i];

        totalBruto += sueldoBruto[i];
        totalImpuesto += impuesto[i];
        totalNeto += sueldoNeto[i];
    }

    printf("\n\n\t\t\tNOMINA QUINCENAL\n\n");
    printf("%-20s %15s %15s %15s\n", "NOMBRE", "SUELDO BRUTO", "IMPUESTO", "SUELDO NETO");

    for (i = 0; i < n; i++) {
        printf("%-20s %15.2f %15.2f %15.2f\n", 
               nombres[i], sueldoBruto[i], impuesto[i], sueldoNeto[i]);
    }

    printf("\n%-20s %15.2f %15.2f %15.2f\n", 
           "TOTALES", totalBruto, totalImpuesto, totalNeto);

    return 0;
}
