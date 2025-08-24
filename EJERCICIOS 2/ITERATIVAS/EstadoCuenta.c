#include <stdio.h>

#define MAX 100  

int main() {
    char nombre[50];
    double saldoInicial, saldo;
    double depositos[MAX] = {0}, retiros[MAX] = {0};
    int movimientos = 0, opcion;
    double monto;

    printf("Ingrese el nombre del cuentahabiente: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese el saldo inicial: ");
    scanf("%lf", &saldoInicial);

    saldo = saldoInicial;

    do {
        printf("\nSeleccione operacion:\n1. Deposito\n2. Retiro\n3. Terminar\nOpcion: ");
        scanf("%d", &opcion);

        if(opcion == 1) {
            printf("Ingrese monto a depositar: ");
            scanf("%lf", &monto);
            depositos[movimientos] = monto;
            retiros[movimientos] = 0;
            saldo += monto;
            movimientos++;
        }
        else if(opcion == 2) {
            printf("Ingrese monto a retirar: ");
            scanf("%lf", &monto);
            if(monto > saldo) {
                printf("Fondos insuficientes!\n");
            } else {
                depositos[movimientos] = 0;
                retiros[movimientos] = monto;
                saldo -= monto;
                movimientos++;
            }
        }
        else if(opcion != 3) {
            printf("Opcion invalida!\n");
        }
    } while(opcion != 3);


    printf("\n\n\t\tESTADO DE CUENTA\n");
    printf("CUENTA HABIENTE: %s", nombre);
    printf("SALDO INICIAL : %.2lf\n\n", saldoInicial);

    printf("%-10s %-15s %-15s %-15s\n", "MOV", "DEPOSITO", "RETIRO", "SALDO");

    saldo = saldoInicial;
    double totalDepositos = 0, totalRetiros = 0;

    for(int i = 0; i < movimientos; i++) {
        saldo += depositos[i] - retiros[i];
        totalDepositos += depositos[i];
        totalRetiros += retiros[i];
        printf("%-10d %-15.2lf %-15.2lf %-15.2lf\n", i+1, depositos[i], retiros[i], saldo);
    }

    printf("TOTALES    %-15.2lf %-15.2lf %-15.2lf\n", totalDepositos, totalRetiros, saldo);

    return 0;
}
