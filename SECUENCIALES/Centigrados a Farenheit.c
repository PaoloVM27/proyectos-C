#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("Formula: F = (9/5)*C + 32\n\n");
    
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    
    printf("\n=== RESULTADO ===\n");
    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
    
    return 0;
}