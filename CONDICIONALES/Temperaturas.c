#include <stdio.h>

int main() {
    int opcion;
    float temperatura, celsius, fahrenheit, kelvin, rankine;
    
    printf("           CONVERSOR DE TEMPERATURAS           \n");
    printf("-----------------------------------------------\n");
    printf("Seleccione el tipo de temperatura a convertir:\n");
    printf("1. Fahrenheit\n");
    printf("2. Celsius\n");
    printf("3. Kelvin\n");
    printf("4. Rankine\n");
    printf("Ingrese su opcion (1-4): ");
    scanf("%d", &opcion);
    
    printf("\nIngrese la temperatura: ");
    scanf("%f", &temperatura);
    
    switch (opcion) {
        case 1: 
            fahrenheit = temperatura;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            kelvin = celsius + 273;
            rankine = fahrenheit + 460;
            
            printf("\n%.2f °F equivalen a:\n", fahrenheit);
            printf("- Celsius: %.2f °C\n", celsius);
            printf("- Kelvin: %.2f K\n", kelvin);
            printf("- Rankine: %.2f °R\n", rankine);
            break;
            
        case 2:
            celsius = temperatura;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            kelvin = celsius + 273;
            rankine = fahrenheit + 460;
            
            printf("\n%.2f °C equivalen a:\n", celsius);
            printf("- Fahrenheit: %.2f °F\n", fahrenheit);
            printf("- Kelvin: %.2f K\n", kelvin);
            printf("- Rankine: %.2f °R\n", rankine);
            break;
            
        case 3: 
            kelvin = temperatura;
            celsius = kelvin - 273;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            rankine = fahrenheit + 460;
            
            printf("\n%.2f K equivalen a:\n", kelvin);
            printf("- Celsius: %.2f °C\n", celsius);
            printf("- Fahrenheit: %.2f °F\n", fahrenheit);
            printf("- Rankine: %.2f °R\n", rankine);
            break;
            
        case 4: 
            rankine = temperatura;
            fahrenheit = rankine - 460;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            kelvin = celsius + 273;
            
            printf("\n%.2f °R equivalen a:\n", rankine);
            printf("- Fahrenheit: %.2f °F\n", fahrenheit);
            printf("- Celsius: %.2f °C\n", celsius);
            printf("- Kelvin: %.2f K\n", kelvin);
            break;
            
        default:
            printf("\nError: Opcion no valida. Debe seleccionar entre 1 y 4.\n");
            return 1;
    }
    
    return 0;
}