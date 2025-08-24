#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 2; i <= 8; i = i + 2) {
        for (j = i; j <= 4; j++) {
            for (k = 1; k <= j; k = k + i) {
                printf("%d, %d, %d\n", i, j, k);
            }
        }
    }

    return 0;
}

/* SALIDA:

i = 2:
  j = 2:
    k = 1 -> 2, 2, 1
  j = 3:
    k = 1 -> 2, 3, 1
    k = 3 -> 2, 3, 3
  j = 4:
    k = 1 -> 2, 4, 1
    k = 3 -> 2, 4, 3

i = 4:
  j = 4:
    k = 1 -> 4, 4, 1

i = 6:
  (j comienza en 6, pero 6 > 4 → no ejecuta)

i = 8:
  (j comienza en 8, pero 8 > 4 → no ejecuta)

*/
