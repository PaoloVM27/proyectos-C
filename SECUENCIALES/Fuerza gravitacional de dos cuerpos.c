#include <stdio.h>
#define G 6.673e-8 

int main(){
    double m1, m2, distancia, fuerza;

    printf("CALCULADORA DE FUERZA GRAVITACIONAL ENTRE DOS CUERPOS \n\n");
    printf("Ingresar masa del primer cuerpo (en gramos): ");
    scanf("%lf", &m1);
    printf("Ingresar masa del segundo cuerpo (en gramos): ");
    scanf("%lf", &m2);
    printf("Ingresa la distancia entre los cuerpos (en centímetros): ");
    scanf("%lf", &distancia);

    fuerza = (G*m1*m2)/distancia*distancia;

    printf("\n----------------------RESULTADOS-------------------------\n");
    printf("Masa del 1° cuerpo: %lf gramos\n", m1);
    printf("Masa del 2° cuerpo: %lf gramos\n", m2);
    printf("Distancia entre los cuerpo: %lf cm \n", distancia);
    printf("La fuerza gravitacional entre los cuerpos: %lf dinas", fuerza);

return 0;
}