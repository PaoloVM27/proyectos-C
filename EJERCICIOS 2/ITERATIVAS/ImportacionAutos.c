#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int n, i;
    char marca[MAX][50], origen[MAX][20];
    double costo[MAX], impuesto[MAX], precio[MAX];
    double totalCosto = 0, totalImpuesto = 0, totalPrecio = 0;

    int contAlemania = 0, contJapon = 0, contItalia = 0, contUSA = 0;

    printf("Ingrese el numero de autos importados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nAuto %d\n", i+1);

        printf("Marca: ");
        scanf(" %[^\n]", marca[i]);

        printf("Origen (Alemania/Japon/Italia/USA): ");
        scanf(" %[^\n]", origen[i]);

        printf("Costo: ");
        scanf("%lf", &costo[i]);

        if (strcasecmp(origen[i], "Alemania") == 0) {
            impuesto[i] = costo[i] * 0.20;
            contAlemania++;
        } else if (strcasecmp(origen[i], "Japon") == 0) {
            impuesto[i] = costo[i] * 0.30;
            contJapon++;
        } else if (strcasecmp(origen[i], "Italia") == 0) {
            impuesto[i] = costo[i] * 0.15;
            contItalia++;
        } else if (strcasecmp(origen[i], "USA") == 0) {
            impuesto[i] = costo[i] * 0.08;
            contUSA++;
        } else {
            impuesto[i] = 0; 
        }

        precio[i] = costo[i] + impuesto[i];

        totalCosto += costo[i];
        totalImpuesto += impuesto[i];
        totalPrecio += precio[i];
    }

    printf("\n\n\tREPORTE DE AUTOS IMPORTADOS\n");
    printf("%-15s %-15s %-15s %-15s %-15s\n", "MARCA", "ORIGEN", "COSTO", "IMPUESTO", "PRECIO VTA");

    for (i = 0; i < n; i++) {
        printf("%-15s %-15s %-15.2lf %-15.2lf %-15.2lf\n",
               marca[i], origen[i], costo[i], impuesto[i], precio[i]);
    }

    printf("TOTAL AUTOS: %d\n", n);
    printf("%-15s %-15s %-15.2lf %-15.2lf %-15.2lf\n", " ", " ", totalCosto, totalImpuesto, totalPrecio);

    printf("\nALEMANIA: %d\n", contAlemania);
    printf("JAPON: %d\n", contJapon);
    printf("ITALIA: %d\n", contItalia);
    printf("USA: %d\n", contUSA);

    int max = contAlemania;
    char pais[20] = "Alemania";

    if (contJapon > max) { max = contJapon; strcpy(pais, "Japon"); }
    if (contItalia > max) { max = contItalia; strcpy(pais, "Italia"); }
    if (contUSA > max) { max = contUSA; strcpy(pais, "USA"); }

    printf("PAIS DEL QUE SE IMPORTO MAS AUTOS: %s\n", pais);

    return 0;
}
