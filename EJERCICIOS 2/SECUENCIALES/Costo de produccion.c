#include <stdio.h>
#define factor 3.5
#define costoFijo 10000

int main(){
    char nombre[20];
    int unidades;
    float costo;

    printf("Ingrese el nombre del articulo: ");
    scanf("%19[^\n]", nombre);

    while(getchar() != '\n');

    printf("Cantidad de unidades de este articulo: ");
    scanf("%d", &unidades);

    costo = unidades * factor + costoFijo; 

    printf("\nEl costo de producción de %d unidades de %s es: %.2f", unidades, nombre, costo);

    return 0;
} 