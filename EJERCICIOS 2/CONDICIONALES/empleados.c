#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    int tipo_empleado;
    float horas_trabajadas, pago_por_hora, sueldo_base, horas_extra, pago_extra;
    
    printf("Ingrese el nombre del empleado: ");
    scanf(" %[^\n]", nombre); 
    
    printf("Ingrese el tipo de empleado (1-4): ");
    scanf("%d", &tipo_empleado);
    
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%f", &horas_trabajadas);
    
    printf("Ingrese el pago por hora: ");
    scanf("%f", &pago_por_hora);

    if (horas_trabajadas > 40) {
        sueldo_base = 40 * pago_por_hora;
        horas_extra = horas_trabajadas - 40;
    } else {
        sueldo_base = horas_trabajadas * pago_por_hora;
        horas_extra = 0;
    }

    switch (tipo_empleado) {
        case 1:
            pago_extra = horas_extra * pago_por_hora * 1.5;
            break;
        case 2:
            pago_extra = horas_extra * pago_por_hora * 2.0;
            break;
        case 3:
            pago_extra = horas_extra * pago_por_hora * 2.5;
            break;
        case 4:
            pago_extra = horas_extra * pago_por_hora * 3.0;
            break;
        default:
            printf("\nError: Tipo de empleado no válido. Debe ser entre 1 y 4.\n");
            return 1;
    }

    float sueldo_total = sueldo_base + pago_extra;

    printf("SUELDO A PAGAR: $%.2f\n", sueldo_total);

    return 0;
}