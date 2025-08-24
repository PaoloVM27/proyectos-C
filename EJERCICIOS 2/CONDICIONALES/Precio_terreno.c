#include <stdio.h>

int main() {
    float largo, ancho, precio_metroCuadrado, area, precio_total, descuento = 0;
    
    printf("Ingrese el largo del terreno (metros): ");
    scanf("%f", &largo);
    
    printf("Ingrese el ancho del terreno (metros): ");
    scanf("%f", &ancho);
    
    printf("Ingrese el precio por metro cuadrado: ");
    scanf("%f", &precio_metroCuadrado);
    
    area = largo * ancho;
    
    precio_total = area * precio_metroCuadrado;
    
    if (area > 400) {
        descuento = precio_total * 0.10; 
        precio_total -= descuento;
    }
    
    printf("\n=== RESULTADOS ===\n");
    printf("Área del terreno: %.2f m²\n", area);
    printf("Precio base: $%.2f\n", area * precio_metroCuadrado);
    
    if (descuento > 0) {
        printf("Descuento aplicado: -$%.2f\n", descuento);
        printf("PRECIO FINAL CON DESCUENTO: $%.2f\n", precio_total);
    } else {
        printf("PRECIO FINAL: $%.2f\n", precio_total);
    }
    
    return 0;
}