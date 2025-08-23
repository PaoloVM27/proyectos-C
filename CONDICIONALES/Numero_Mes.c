#include <stdio.h>

int main() {
    int numero_mes;
    
    printf("Ingrese un numero entre 1 y 12: ");
    scanf("%d", &numero_mes);
    
    switch (numero_mes) {
        case 1:
            printf("\nEl mes numero %d es: Enero\n", numero_mes);
            break;
        case 2:
            printf("\nEl mes numero %d es: Febrero\n", numero_mes);
            break;
        case 3:
            printf("\nEl mes numero %d es: Marzo\n", numero_mes);
            break;
        case 4:
            printf("\nEl mes numero %d es: Abril\n", numero_mes);
            break;
        case 5:
            printf("\nEl mes numero %d es: Mayo\n", numero_mes);
            break;
        case 6:
            printf("\nEl mes numero %d es: Junio\n", numero_mes);
            break;
        case 7:
            printf("\nEl mes numero %d es: Julio\n", numero_mes);
            break;
        case 8:
            printf("\nEl mes numero %d es: Agosto\n", numero_mes);
            break;
        case 9:
            printf("\nEl mes numero %d es: Septiembre\n", numero_mes);
            break;
        case 10:
            printf("\nEl mes numero %d es: Octubre\n", numero_mes);
            break;
        case 11:
            printf("\nEl mes numero %d es: Noviembre\n", numero_mes);
            break;
        case 12:
            printf("\nEl mes numero %d es: Diciembre\n", numero_mes);
            break;
        default:
            printf("\nError: El numero %d no corresponde a un mes valido.\n", numero_mes);
            printf("Por favor ingrese un numero entre 1 y 12.\n");
    }
    
    return 0;
}