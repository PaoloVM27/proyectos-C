#include <stdio.h>

int main() {
    float fahrenheit_inicial, fahrenheit_final;
    
    printf("Ingrese el valor inicial en Fahrenheit: ");
    scanf("%f", &fahrenheit_inicial);
    
    printf("Ingrese el valor final en Fahrenheit: ");
    scanf("%f", &fahrenheit_final);
    
    if (fahrenheit_inicial > fahrenheit_final) {
        printf("Error: El valor inicial debe ser menor o igual al valor final.\n");
        return 1;
    }
    
    printf("  Fahrenheit    Celsius\n");
    printf("========================================\n");
    
    for (float f = fahrenheit_inicial; f <= fahrenheit_final; f += 1.0) {
        float celsius = (f - 32) * 5.0 / 9.0;
        printf("    %6.1f°F    %6.2f°C\n", f, celsius);
    }
    
    return 0;
}