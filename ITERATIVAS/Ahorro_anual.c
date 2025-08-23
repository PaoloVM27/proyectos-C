#include <stdio.h>

int main() {
    double deposito = 1000.0;
    double tasa = 0.03;
    int total_meses = 120; 
    double ahorro = 0.0;
    
    printf("     CÁLCULO DE AHORROS CON INTERÉS    \n");
    printf("========================================\n");
    printf("Depósito mensual: S/. %.2f\n", deposito);
    printf("Tasa interés: %.1f%% mensual\n", tasa * 100);
    printf("Período: 10 años (120 meses)\n");
    printf("========================================\n\n");
    
    for (int mes = 1; mes <= total_meses; mes++) {
        ahorro = (ahorro + deposito) * (1 + tasa);
        
        if (mes % 12 == 0) {
            int anno = mes / 12;
            printf("Fin del año %d: S/. %.2f\n", anno, ahorro);
        }
    }
    
    printf("\nRESULTADO FINAL:\n");
    printf("Total depositado:  S/. %.2f\n", deposito * total_meses);
    printf("Intereses ganados: S/. %.2f\n", ahorro - (deposito * total_meses));
    printf("Ahorro total:      S/. %.2f\n", ahorro);
    
    return 0;
}