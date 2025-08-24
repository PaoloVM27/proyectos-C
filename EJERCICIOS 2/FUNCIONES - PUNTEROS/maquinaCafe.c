#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[20];
    float precio;
} Producto;

int menuPrincipal();
Producto seleccionarProducto();
float pagar(float precio);
void mostrarResumen(Producto producto, float monto, float vuelto);

int main() {
    int opcion;
    Producto producto;
    float monto = 0, vuelto = 0;
    int productoSeleccionado = 0;

    do {
        opcion = menuPrincipal();
        switch(opcion) {
            case 1:
                producto = seleccionarProducto();
                if (producto.precio > 0) {
                    productoSeleccionado = 1;
                }
                break;
            case 2:
                if (productoSeleccionado) {
                    monto = pagar(producto.precio);
                    vuelto = monto - producto.precio;
                    mostrarResumen(producto, monto, vuelto);
                    productoSeleccionado = 0; 
                } else {
                    printf("\nPrimero seleccione un producto!\n");
                }
                break;
            case 3:
                printf("\nGracias por usar la máquina expendedora.\n");
                break;
            default:
                printf("\nOpción no válida.\n");
        }
    } while(opcion != 3);

    return 0;
}

int menuPrincipal() {
    int opcion;
    printf("\n******************************\n");
    printf("1. Seleccionar producto\n");
    printf("2. Pagar y dar vuelto\n");
    printf("3. Salir\n");
    printf("Seleccione opción: ");
    scanf("%d", &opcion);
    return opcion;
}

Producto seleccionarProducto() {
    Producto producto;
    char opcion;

    producto.precio = 0; 
    
    printf("\n******************************\n");
    printf("a. Café            S/. 1.00\n");
    printf("b. Café con leche  S/. 1.50\n");
    printf("c. Leche           S/. 2.00\n");
    printf("Elegir opción: ");
    scanf(" %c", &opcion);

    switch(opcion) {
        case 'a':
            sprintf(producto.nombre, "Café");
            producto.precio = 1.00;
            break;
        case 'b':
            sprintf(producto.nombre, "Café con leche");
            producto.precio = 1.50;
            break;
        case 'c':
            sprintf(producto.nombre, "Leche");
            producto.precio = 2.00;
            break;
        default:
            printf("Opción inválida. No se seleccionó ningún producto.\n");
    }
    return producto;
}

float pagar(float precio) {
    float monto;
    do {
        printf("\n******************************\n");
        printf("Precio: S/. %.2f\n", precio);
        printf("Monto: ");
        scanf("%f", &monto);
        if (monto < precio) {
            printf("Monto insuficiente. Intente de nuevo.\n");
        }
    } while(monto < precio);
    return monto;
}

void mostrarResumen(Producto producto, float monto, float vuelto) {
    printf("\n******************************\n");
    printf("Usted compró %s de precio S/. %.2f\n", producto.nombre, producto.precio);
    printf("Pagó S/. %.2f y su vuelto es S/. %.2f\n", monto, vuelto);
}
