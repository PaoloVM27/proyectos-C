#include <stdio.h>

int main() {
    int b, c;
    float a;
    float discriminante;
    
    printf("============================================================\n");
    printf("   a      b      c      Discriminante   Tipo de Raíces\n");
    printf("============================================================\n");
    
    for (b = 1, c = 7; b <= 7 && c >= 1; b++, c--) {
        a = b - c;
        
        discriminante = b * b - 4 * a * c;
        
        printf("%6.1f   %3d    %3d    %12.2f     ", a, b, c, discriminante);
        
        if (a == 0) {
            printf("Ecuación lineal (a=0)\n");
        } else if (discriminante > 0) {
            printf("Raíces reales distintas\n");
        } else if (discriminante == 0) {
            printf("Raíz única (real doble)\n");
        } else {
            printf("Raíces complejas conjugadas\n");
        }
    }
    
    printf("============================================================\n");
    
    return 0;
}