#include <stdio.h>

int leerSegundos() {
    int segundos;
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &segundos);
    return segundos;
}

int Horas(int totalSegundos) {
    return totalSegundos / 3600;
}

int Minutos(int totalSegundos) {
    return (totalSegundos % 3600) / 60;
}

int Segundos(int totalSegundos) {
    return totalSegundos % 60;
}

void Tiempo(int horas, int minutos, int segundos) {
    printf("Tiempo equivalente: %d horas, %d minutos y %d segundos\n", horas, minutos, segundos);
}

int main() {
    int totalSegundos, horas, minutos, segundos;

    totalSegundos = leerSegundos();
    horas = Horas(totalSegundos);
    minutos = Minutos(totalSegundos);
    segundos = Segundos(totalSegundos);

    Tiempo(horas, minutos, segundos);

    return 0;
}
