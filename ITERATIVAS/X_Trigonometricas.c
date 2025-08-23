#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265358979323846

int main() {
    double x;
    
    printf("================================================================================\n");
    printf("    X (rad)      Secante(X)     Cosecante(X)     Tangente(X)     Notas\n");
    printf("================================================================================\n");
    
    for (x = -1.0; x <= 1.0; x += 0.1) {
        double sec, csc, tang;
        char notas[50] = "";
        
        if (fabs(cos(x)) < 1e-10) {
            sec = 99.99;
            strcat(notas, "sec-IND ");
        } else {
            sec = 1.0 / cos(x);
            if (fabs(sec) > 99.99) sec = (sec > 0) ? 99.99 : -99.99;
        }
        
        if (fabs(sin(x)) < 1e-10) {
            csc = 99.99;
            strcat(notas, "csc-IND ");
        } else {
            csc = 1.0 / sin(x);
            if (fabs(csc) > 99.99) csc = (csc > 0) ? 99.99 : -99.99;
        }
        
        if (fabs(cos(x)) < 1e-10) {
            tang = 99.99;
            strcat(notas, "tan-IND ");
        } else {
            tang = tan(x);
            if (fabs(tang) > 99.99) tang = (tang > 0) ? 99.99 : -99.99;
        }
        
        printf("%8.1f       %8.2f       %8.2f       %8.2f       %s\n", 
               x, sec, csc, tang, notas);
    }
    
    printf("================================================================================\n");
    printf("NOTA: 99.99 indica valor indefinido (división por cero)\n");
    
    return 0;
}