#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void ordenar(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void combinar(int arr1[], int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < n) {
        result[k++] = arr1[i++];
    }

    while (j < n) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[N], arr2[N], arr3[2 * N];
    int i;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        arr1[i] = rand() % 1000;
        arr2[i] = rand() % 1000;
    }

    ordenar(arr1, N);
    ordenar(arr2, N);

    combinar(arr1, arr2, N, arr3);

    printf("Vector 1 ordenado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    printf("Vector 2 ordenado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    printf("Vector combinado ordenado:\n");
    for (i = 0; i < 2 * N; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
