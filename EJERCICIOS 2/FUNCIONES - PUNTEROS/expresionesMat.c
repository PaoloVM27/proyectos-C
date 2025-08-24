#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10 

double calcularMedia(int v[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma / n;
}

double calcularDesviacionMedia(int v[], int n, double media) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += fabs(v[i] - media);
    }
    return suma / n;
}

double calcularDesviacionTipica(int v[], int n, double media) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(v[i] - media, 2);
    }
    return sqrt(suma / n);
}

int main() {
    int vector[N];
    srand(time(NULL));

    printf("Vector generado:\n");
    for (int i = 0; i < N; i++) {
        vector[i] = rand() % 100; 
        printf("%d ", vector[i]);
    }
    printf("\n");

    double media = calcularMedia(vector, N);
    double dm = calcularDesviacionMedia(vector, N, media);
    double dt = calcularDesviacionTipica(vector, N, media);

    printf("\nResultados:\n");
    printf("Media (m): %.2f\n", media);
    printf("Desviacion media (dm): %.2f\n", dm);
    printf("Desviacion tipica (dt): %.2f\n", dt);

    return 0;
}
