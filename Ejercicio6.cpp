#include <iostream>
using namespace std;

int main() {
    const int FILAS = 6;
    const int COLUMNAS = 6;

    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3},
        {4, 5, 6, 7, 8, 9},
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3},
        {4, 5, 6, 7, 8, 9}
    };
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][COLUMNAS - 1 - j];
            matriz[i][COLUMNAS - 1 - j] = temp;
        }
    }
    cout << "Matriz reflejada horizontalmente:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}