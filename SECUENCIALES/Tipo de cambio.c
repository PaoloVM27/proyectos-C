#include <stdio.h>

int main() {
    float dolares;
    float cambio_yen, cambio_peseta, cambio_libra, cambio_sol;
    float yen, peseta, libra, sol;
     
    printf("Ingrese la cantidad de dólares a comprar: ");
    scanf("%f", &dolares);
    
    printf("\nIngrese los tipos de cambio:\n");
    printf("Tipo de cambio para Yen: ");
    scanf("%f", &cambio_yen);
    
    printf("Tipo de cambio para Peseta: ");
    scanf("%f", &cambio_peseta);
    
    printf("Tipo de cambio para Libra: ");
    scanf("%f", &cambio_libra);
    
    printf("Tipo de cambio para Nuevo Sol: ");
    scanf("%f", &cambio_sol);
    
    yen = dolares * cambio_yen;
    peseta = dolares * cambio_peseta;
    libra = dolares * cambio_libra;
    sol = dolares * cambio_sol;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Dólares: $%.2f\n", dolares);
    printf("Yenes: ¥%.2f\n", yen);
    printf("Pesetas: %.2f pts\n", peseta);
    printf("Libras: £%.2f\n", libra);
    printf("Soles: S/.%.2f\n", sol);
    
    return 0;
}