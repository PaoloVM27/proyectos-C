#include <stdio.h>

void convertirUnidades(int u) {
    switch (u) {
        case 1: printf("I"); break;
        case 2: printf("II"); break;
        case 3: printf("III"); break;
        case 4: printf("IV"); break;
        case 5: printf("V"); break;
        case 6: printf("VI"); break;
        case 7: printf("VII"); break;
        case 8: printf("VIII"); break;
        case 9: printf("IX"); break;
    }
}

void convertirDecenas(int d) {
    switch (d) {
        case 1: printf("X"); break;
        case 2: printf("XX"); break;
        case 3: printf("XXX"); break;
        case 4: printf("XL"); break;
        case 5: printf("L"); break;
        case 6: printf("LX"); break;
        case 7: printf("LXX"); break;
        case 8: printf("LXXX"); break;
        case 9: printf("XC"); break;
    }
}

void convertirCentenas(int c) {
    switch (c) {
        case 1: printf("C"); break;
        case 2: printf("CC"); break;
        case 3: printf("CCC"); break;
        case 4: printf("CD"); break;
        case 5: printf("D"); break;
        case 6: printf("DC"); break;
        case 7: printf("DCC"); break;
        case 8: printf("DCCC"); break;
        case 9: printf("CM"); break;
    }
}

void convertirDecimalARomano(int numero) {
    int centenas = numero / 100;
    int decenas = (numero % 100) / 10;
    int unidades = numero % 10;

    convertirCentenas(centenas);
    convertirDecenas(decenas);
    convertirUnidades(unidades);
    printf("\n");
}

int main() {
    int numero;
    printf("Ingrese un numero decimal (1 - 999): ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 999) {
        printf("Numero fuera de rango.\n");
    } else {
        printf("Numero en romano: ");
        convertirDecimalARomano(numero);
    }

    return 0;
}
