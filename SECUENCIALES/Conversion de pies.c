#include <stdio.h>

int main(){
    float pies, yardas, pulgadas, centimetros, metros;

    printf("Ingresar distancia en pies: ");
    scanf("%f", &pies);

    yardas = pies/3;
    pulgadas = 12*pies;
    centimetros = pulgadas*2.54;
    metros = centimetros/100;

    printf("---------RESULTADOS---------\n");
    printf("Pies: %f\n", pies);
    printf("Yardas: %f\n", yardas);
    printf("Pulgadas: %f\n", pulgadas);
    printf("Centimetros: %f\n", centimetros);
    printf("Metros: %f\n", metros);

    return 0;
}