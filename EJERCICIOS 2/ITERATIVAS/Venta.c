#include <stdio.h>
#include <string.h>

#define MAX 100  

int main() {
    int n, i;
    char articulo[MAX][50];
    float costo[MAX], utilidad[MAX], impuesto[MAX], precioVenta[MAX];

    printf("Ingrese el numero de articulos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nIngrese descripcion del articulo %d: ", i+1);
        scanf("%s", articulo[i]);
        printf("Ingrese costo de produccion: ");
        scanf("%f", &costo[i]);
    }

    for (i = 0; i < n; i++) {
        utilidad[i] = costo[i] * 1.2;  
        impuesto[i] = 0.15 * (costo[i] + utilidad[i]);  
        precioVenta[i] = costo[i] + utilidad[i] + impuesto[i];  
    }

    printf("\n---------------------------------------------------------------------------------------\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", 
           "ARTICULO", "COSTO", "UTILIDAD", "IMPUESTO", "PRECIO VENTA");
    printf("---------------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-15s %-15.2f   %-15.2f  %-15.2f  %-15.2f\n", 
               articulo[i], costo[i], utilidad[i], impuesto[i], precioVenta[i]);
    }

    printf("---------------------------------------------------------------------------------------\n");

    return 0;
}
