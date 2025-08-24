#include <stdio.h>

#define max 100

int main() {
    char articulo[max][30];
    int unidades[max];
    float factor[max], costoFijo[max], costoProduccion[max];
    int n, i;
    float totalProduccion = 0;

    printf("Ingrese el número de artículos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nArtículo %d:\n", i+1);

        printf("Descripción: ");
        scanf("%s", articulo[i]);

        printf("Cantidad de unidades producidas: ");
        scanf("%d", &unidades[i]);

        printf("Factor de costo de materiales: ");
        scanf("%f", &factor[i]);

        printf("Costo fijo: ");
        scanf("%f", &costoFijo[i]);


        costoProduccion[i] = (unidades[i] * factor[i]) + costoFijo[i];

        totalProduccion += costoProduccion[i];
    }

    printf("\n\n                                COSTO DE PRODUCCIÓN                                  \n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("ARTICULO            UNIDADES PROD.   FACTOR COSTO     COSTO FIJO    COSTO DE PRODUCCION\n");
    printf("---------------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-18s  %8d  %15.2f  %16.2f  %17.2f\n",
               articulo[i],
               unidades[i],
               factor[i],
               costoFijo[i],
               costoProduccion[i]);
    }

    printf("----------------------------------------------------------------------------------------\n");
    printf("                                                             TOTAL %2d ARTICULOS: %.2f\n", n, totalProduccion);

    return 0;
}
