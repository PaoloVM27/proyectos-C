#include <stdio.h>

int main(){
    float X, Y;

    printf("Ingresa el valor de X: ");
    scanf("%f", &X);

    if(X < 0){
        Y = 3 * X + 6;
    } else{
        Y = X * X + 6;
    }

    printf("\nEl valor de Y es: %.2f\n\n", Y);

    return 0;
}