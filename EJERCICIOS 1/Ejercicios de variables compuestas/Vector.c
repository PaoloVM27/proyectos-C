#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int arr[N];
    int i, j, temp;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        arr[i] = rand() % 1000;
    }

    printf("Vector original:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Vector ordenado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
