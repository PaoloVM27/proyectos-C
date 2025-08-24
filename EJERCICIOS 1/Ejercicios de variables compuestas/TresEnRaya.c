#include <stdio.h>

#define N 3

int hayGanador(const char t[N][N], char jugador) {
    for (int i = 0; i < N; i++)
        if (t[i][0] == jugador && t[i][1] == jugador && t[i][2] == jugador) return 1;
    for (int j = 0; j < N; j++)
        if (t[0][j] == jugador && t[1][j] == jugador && t[2][j] == jugador) return 1;
    if (t[0][0] == jugador && t[1][1] == jugador && t[2][2] == jugador) return 1;
    if (t[0][2] == jugador && t[1][1] == jugador && t[2][0] == jugador) return 1;
    return 0;
}

int buscarJugada(const char t[N][N], char jugador, int *r, int *c) {
    for (int i = 0; i < N; i++) {
        int cnt = 0, vac = 0, pos = -1;
        for (int j = 0; j < N; j++) {
            if (t[i][j] == jugador) cnt++;
            else if (t[i][j] == '.') { vac++; pos = j; }
        }
        if (cnt == 2 && vac == 1) { *r = i; *c = pos; return 1; }
    }
    for (int j = 0; j < N; j++) {
        int cnt = 0, vac = 0, pos = -1;
        for (int i = 0; i < N; i++) {
            if (t[i][j] == jugador) cnt++;
            else if (t[i][j] == '.') { vac++; pos = i; }
        }
        if (cnt == 2 && vac == 1) { *r = pos; *c = j; return 1; }
    }
    {
        int cnt = 0, vac = 0, pos = -1;
        for (int i = 0; i < N; i++) {
            if (t[i][i] == jugador) cnt++;
            else if (t[i][i] == '.') { vac++; pos = i; }
        }
        if (cnt == 2 && vac == 1) { *r = pos; *c = pos; return 1; }
    }
    {
        int cnt = 0, vac = 0, pos = -1;
        for (int i = 0; i < N; i++) {
            int j = N - 1 - i;
            if (t[i][j] == jugador) cnt++;
            else if (t[i][j] == '.') { vac++; pos = i; }
        }
        if (cnt == 2 && vac == 1) { *r = pos; *c = N - 1 - pos; return 1; }
    }
    return 0;
}

int main() {
    char t[N][N];
    printf("Ingrese el tablero 3x3 usando X, O y . :\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            scanf(" %c", &t[i][j]);
            if (t[i][j] == 'x') t[i][j] = 'X';
            if (t[i][j] == 'o') t[i][j] = 'O';
            if (t[i][j] != 'X' && t[i][j] != 'O' && t[i][j] != '.') t[i][j] = '.';
        }

    if (hayGanador(t, 'X')) {
        printf("Ya ganó X.\n");
    } else if (hayGanador(t, 'O')) {
        printf("Ya ganó O.\n");
    } else {
        int r, c;
        if (buscarJugada(t, 'X', &r, &c)) {
            printf("Jugada ganadora: colocar X en (%d, %d)\n", r + 1, c + 1);
            t[r][c] = 'X';
        } else if (buscarJugada(t, 'O', &r, &c)) {
            printf("Bloquear derrota: colocar X en (%d, %d)\n", r + 1, c + 1);
            t[r][c] = 'X';
        } else {
            printf("Sin jugada inmediata. Juega en la primera casilla vacía.\n");
            for (int i = 0; i < N; i++) {
                int hecho = 0;
                for (int j = 0; j < N; j++) {
                    if (t[i][j] == '.') { t[i][j] = 'X'; hecho = 1; break; }
                }
                if (hecho) break;
            }
        }
    }

    printf("\nTablero:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
