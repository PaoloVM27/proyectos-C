#include <stdio.h>

int main() {
    char articulo[50];
    float costo, utilidad, impuesto, precio_venta;
    
    const float PORCENTAJE_UTILIDAD = 1.50f;  
    const float PORCENTAJE_IMPUESTO = 0.19f;   
    
    printf("=== CALCULADORA DE PRECIO DE VENTA ===\n\n");
    
    printf("Ingrese el nombre del articulo: ");
    scanf(" %[^\n]", articulo);
    
    printf("Ingrese el costo del articulo: ");
    scanf("%f", &costo);
    
    utilidad = costo * PORCENTAJE_UTILIDAD;
    impuesto = costo * PORCENTAJE_IMPUESTO;
    precio_venta = costo + utilidad + impuesto;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Articulo: %s\n", articulo);
    printf("Costo: $%.2f\n", costo);
    printf("Utilidad (150%%): $%.2f\n", utilidad);
    printf("Impuesto (19%%): $%.2f\n", impuesto);
    printf("Precio de venta: $%.2f\n", precio_venta);
    
    return 0;
}