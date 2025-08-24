#include <stdio.h>
#include <string.h>

float calcularDescuento(int cantidad) {
    if (cantidad <= 10) {
        return 0.0f; 
    } else if (cantidad <= 20) {
        return 0.10f; 
    } else if (cantidad <= 50) {
        return 0.20f; 
    } else {
        return 0.25f; 
    }
}

const char* obtenerTextoDescuento(float descuento) {
    if (descuento == 0.0f) return "0%";
    if (descuento == 0.10f) return "10%";
    if (descuento == 0.20f) return "20%";
    if (descuento == 0.25f) return "25%";
    return "0%";
}

int main() {
    char nombre[50];
    float precio;
    int cantidad;
    char continuar;
    int numeroProducto = 1;
    
    printf("POLITICA DE DESCUENTOS:\n");
    printf("- Hasta 10 unidades: 0%% de descuento\n");
    printf("- De 11 a 20 unidades: 10%% de descuento\n");
    printf("- De 21 a 50 unidades: 20%% de descuento\n");
    printf("- Más de 50 unidades: 25%% de descuento\n\n");
    
    do {
        printf("    PRODUCTO %d    \n", numeroProducto);
        
        printf("Nombre del producto: ");
        scanf(" %[^\n]", nombre); 
        
        printf("Precio unitario: ");
        scanf("%f", &precio);
        
        printf("Cantidad: ");
        scanf("%d", &cantidad);
        
        if (precio <= 0 || cantidad <= 0) {
            printf("Error: El precio y la cantidad deben ser valores positivos.\n");
            continue;
        }
        
        float subtotal = precio * cantidad;
        float descuento = calcularDescuento(cantidad);
        float valorDescuento = subtotal * descuento;
        float totalPagar = subtotal - valorDescuento;
        
        printf("\n--- FACTURA DEL PRODUCTO ---\n");
        printf("Producto: %s\n", nombre);
        printf("Precio unitario: $%.2f\n", precio);
        printf("Cantidad: %d unidades\n", cantidad);
        printf("Subtotal: $%.2f\n", subtotal);
        printf("Descuento aplicado (%s): -$%.2f\n", obtenerTextoDescuento(descuento), valorDescuento);
        printf("TOTAL A PAGAR: $%.2f\n", totalPagar);
        
        printf("\n¿Desea ingresar otro producto? (s/n): ");
        scanf(" %c", &continuar);
        
        numeroProducto++;
        
    } while (continuar == 's' || continuar == 'S');
    
    printf("\n=== GRACIAS POR USAR EL SISTEMA ===\n");
    
    return 0;
}