#include <stdio.h>

void intercambiarNumeros(float *a, float *b);

int main() {
    float num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    
    printf("\nValores originales:\n");
    printf("Numero 1: %.2f\n", num1);
    printf("Numero 2: %.2f\n", num2);
    
    intercambiarNumeros(&num1, &num2);
    
    printf("\nValores intercambiados:\n");
    printf("Numero 1: %.2f\n", num1);
    printf("Numero 2: %.2f\n", num2);
    
    return 0;
}

void intercambiarNumeros(float *a, float *b) {
    float temp = *a;  
    *a = *b;          
    *b = temp;        
}