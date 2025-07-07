#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

void mostrarTableros(int original[FILAS][COLUMNAS], int siguiente[FILAS][COLUMNAS]) {
    cout << "Tablero Inicial:\t\tSegunda Generación:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << original[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < COLUMNAS; j++) {
            cout << siguiente[i][j] << " ";
        }
        cout << endl;
    }
}

int contarVecinosVivos(int tablero[FILAS][COLUMNAS], int fila, int col) {
    int vivos = 0;
    for (int i = fila - 1; i <= fila + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i == fila && j == col) continue; // Saltar la celda actual
            if (i >= 0 && i < FILAS && j >= 0 && j < COLUMNAS) {
                vivos += tablero[i][j];
            }
        }
    }
    return vivos;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int tablero[FILAS][COLUMNAS];
    int siguienteGeneracion[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = rand() % 2;
        }
    }
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            int vecinosVivos = contarVecinosVivos(tablero, i, j);

            if (tablero[i][j] == 1) {
                if (vecinosVivos < 2 || vecinosVivos > 3)
                    siguienteGeneracion[i][j] = 0; // Muere
                else
                    siguienteGeneracion[i][j] = 1; // Sobrevive
            } else {
                if (vecinosVivos == 3)
                    siguienteGeneracion[i][j] = 1; // Nace
                else
                    siguienteGeneracion[i][j] = 0; // Sigue muerta
            }
        }
    }
    mostrarTableros(tablero, siguienteGeneracion);
    return 0;
}