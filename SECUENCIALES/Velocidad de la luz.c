#include <stdio.h>
#define vel_luz 300000.0 

int main() {  
    float tiempo, distancia;

    printf("Ingrese el tiempo (en segundos): ");
    scanf("%f", &tiempo);  

    distancia = tiempo * vel_luz;

    printf("La velocidad de la luz en %.2f segundos recorre: %.2f km", tiempo, distancia);

    return 0;
}