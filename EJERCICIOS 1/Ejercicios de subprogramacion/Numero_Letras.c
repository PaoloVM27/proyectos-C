#include <stdio.h>
#include <string.h>

char *unidades[] = {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
char *decenasEspeciales[] = {"diez","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
char *decenas[] = {"","diez","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
char *centenas[] = {"","cien","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};

void convertirMenor1000(int num) {
    if (num == 0) return;
    
    if (num >= 100) {
        if (num == 100) {
            printf("cien");
            return;
        } else {
            printf("%s", centenas[num/100]);
            if (num % 100 != 0) printf(" ");
        }
        num %= 100;
    }

    if (num >= 20) {
        printf("%s", decenas[num/10]);
        if (num % 10 != 0) printf(" y %s", unidades[num%10]);
        return;
    } else if (num >= 10) {
        printf("%s", decenasEspeciales[num-10]);
        return;
    } else if (num > 0) {
        printf("%s", unidades[num]);
        return;
    }
}

void convertirNumero(long num) {
    if (num == 0) {
        printf("cero");
        return;
    }

    int millones = num / 1000000;
    int miles = (num % 1000000) / 1000;
    int resto = num % 1000;

    if (millones > 0) {
        if (millones == 1) {
            printf("un millon");
        } else {
            convertirMenor1000(millones);
            printf(" millones");
        }
        if (miles > 0 || resto > 0) printf(" ");
    }

    if (miles > 0) {
        if (miles == 1) {
            printf("mil");
        } else {
            convertirMenor1000(miles);
            printf(" mil");
        }
        if (resto > 0) printf(" ");
    }

    if (resto > 0) {
        convertirMenor1000(resto);
    }
}

int main() {
    long numero;

    printf("Ingrese un numero (0 - 999999999): ");
    scanf("%ld", &numero);

    if (numero < 0 || numero > 999999999) {
        printf("Numero fuera de rango.\n");
    } else {
        printf("Numero en palabras: ");
        convertirNumero(numero);
        printf("\n");
    }

    return 0;
}
