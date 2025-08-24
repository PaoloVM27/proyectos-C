#include <stdio.h>
#define PI 3.14159265359

void menu() {
    printf("AREAS GEOMETRICAS:\n");
    printf("1. TRIANGULO\n");
    printf("2. CUADRADO\n");
    printf("3. RECTANGULO\n");
    printf("4. CIRCULO\n");
    printf("5. FIN\n");
    printf("OPCION: ");
}

void areaTriangulo() {
    float base, altura;
    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);
    printf("El area del triangulo es: %.2f\n", (base * altura) / 2);
}

void areaCuadrado() {
    float lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    printf("El area del cuadrado es: %.2f\n", lado * lado);
}

void areaRectangulo() {
    float largo, ancho;
    printf("Ingrese el largo del rectangulo: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f", &ancho);
    printf("El area del rectangulo es: %.2f\n", largo * ancho);
}

void areaCirculo() {
    float radio;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    printf("El area del circulo es: %.2f\n", PI * radio * radio);
}

int main() {
    int opcion;
    do {
        menu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                areaTriangulo();
                break;
            case 2:
                areaCuadrado();
                break;
            case 3:
                areaRectangulo();
                break;
            case 4:
                areaCirculo();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
