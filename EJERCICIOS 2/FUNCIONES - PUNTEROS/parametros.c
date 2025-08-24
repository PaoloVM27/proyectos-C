#include <stdio.h>

void leerNumeros(int *a, int *b, int *c);
int encontrarMayor(int a, int b, int c);
void imprimirMayor(int mayor, int a, int b, int c);

int main() {
    int num1, num2, num3;
    int mayor;
    
    leerNumeros(&num1, &num2, &num3);
    
    mayor = encontrarMayor(num1, num2, num3);
    
    imprimirMayor(mayor, num1, num2, num3);
    
    return 0;
}

void leerNumeros(int *a, int *b, int *c) {
    
    printf("Ingrese el primer numero entero: ");
    scanf("%d", a);
    
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", b);
    
    printf("Ingrese el tercer numero entero: ");
    scanf("%d", c);
}

int encontrarMayor(int a, int b, int c) {
    int mayor = a; 
    
    if (b > mayor) {
        mayor = b;
    }
    
    if (c > mayor) {
        mayor = c;
    }
    
    return mayor;
}

void imprimirMayor(int mayor, int a, int b, int c) {
    printf("\nRESULTADO:\n");
    printf("Numeros ingresados: %d, %d, %d\n", a, b, c);
    printf("El mayor numero es: %d\n", mayor);
}