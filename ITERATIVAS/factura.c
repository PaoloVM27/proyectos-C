#include <stdio.h>
#include <string.h>

#define MAX 100  

int main() {
    int n, i;
    char cliente[100];
    char articulo[MAX][50];
    int cantidad[MAX];
    float precioUnit[MAX], precioTotal[MAX];
    float subtotal = 0, impuesto, total;

    printf("Ingrese el nombre del cliente: ");
    fflush(stdin);
    fgets(cliente, sizeof(cliente), stdin);
    cliente[strcspn(cliente, "\n")] = 0;

    printf("Ingrese el numero de articulos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nIngrese descripcion del articulo %d: ", i+1);
        scanf("%s", articulo[i]);
        printf("Ingrese cantidad: ");
        scanf("%d", &cantidad[i]);
        printf("Ingrese precio unitario: ");
        scanf("%f", &precioUnit[i]);

        precioTotal[i] = cantidad[i] * precioUnit[i];
        subtotal += precioTotal[i];
    }

    impuesto = subtotal * 0.19;
    total = subtotal + impuesto;

    printf("\n====================== FACTURA ======================\n");
    printf("NOMBRE DEL CLIENTE: %s\n", cliente);
    printf("-----------------------------------------------------\n");
    printf("%-15s %-12s  %-15s %-15s\n", 
           "ARTICULO", "CANTIDAD", "P.UNITARIO", "P.TOTAL");
    printf("-----------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-15s   %-12d   %-15.2f %-15.2f\n", 
               articulo[i], cantidad[i], precioUnit[i], precioTotal[i]);
    }

    printf("-----------------------------------------------------\n");
    printf("%-30s %23.2f\n", "SUBTOTAL", subtotal);
    printf("%-30s %23.2f\n", "IMPUESTO (19%)", impuesto);
    printf("%-30s %23.2f\n", "TOTAL", total);
    printf("=====================================================\n");

    return 0;
}
