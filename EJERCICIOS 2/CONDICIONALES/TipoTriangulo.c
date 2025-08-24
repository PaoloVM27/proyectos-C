#include <stdio.h>

int main() {
    float A, B, C;

    printf("CLASIFICACIÓN DE TRIÁNGULOS (por medida de sus angulos)\n\n");
    printf("NOTA: Recuerda los angulos A, B, C que ingresaras deben sumar 180°\n\n");

    printf("Ingrese el valor del angulo A (en grados sexagesimales): ");
    scanf("%f", &A);
    printf("Ingrese el valor del angulo B (en grados sexagesimales): ");
    scanf("%f", &B);
    printf("Ingrese el valor del angulo C (en grados sexagesimales): ");
    scanf("%f", &C);

    if (A + B + C != 180) {
        printf("\nError, los angulos ingresados no suman 180°\n");
    } else {
        if (A == 90 || B == 90 || C == 90) {
            printf("\nTu triangulo es Rectangulo\n");
        } else if (A > 90 || B > 90 || C > 90) {
            printf("\nTu triangulo es Obtusangulo\n");
        } else if (A < 90 && B < 90 && C < 90) {
            printf("\nTu triangulo es Acutangulo\n");
        }
    }

    return 0;
}