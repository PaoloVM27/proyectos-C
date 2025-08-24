#include <stdio.h>

int main() {
    int i, j;

    printf("Tabla de multiplicacion del 1 al 10:\n\n");

    for (i = 1; i <= 10; i++) {   
        for (j = 1; j <= 10; j++) { 
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
