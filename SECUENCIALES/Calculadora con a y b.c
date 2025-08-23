#include <stdio.h>
#include <math.h>

int main() {
    double A, B, Y, Z, W;
    
    printf("Ingrese el valor de A: ");
    scanf("%lf", &A);
    
    printf("Ingrese el valor de B: ");
    scanf("%lf", &B);
    
    Y = 3 * pow(A, 2) * pow(B, 2) * sqrt(2 * A);

    W = sqrt(pow(2, A) * A) * Y;

    Z = Y / W;
    
    printf("\n------------ RESULTADOS -------------\n");
    printf("A = %.4f\n", A);
    printf("B = %.4f\n", B);
    printf("Y = 3a²b²√(2a) = %.6f\n", Y);
    printf("W = √((2^a)*a) * (3a²b²√(2a)) = %.6f\n", W);
    printf("Z = Y/W = %.6f\n", Z);

    return 0;
}