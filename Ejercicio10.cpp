#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;

int main() {
    srand(time(0));
    int tableroMinas[N][N];
    int tableroNumeros[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tableroMinas[i][j] = rand() % 2;
        }
    }
    for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int contador = 0;
	
			if (i > 0 && j > 0 && tableroMinas[i - 1][j - 1] == 1) contador++;     // arriba izquierda
			if (i > 0 && tableroMinas[i - 1][j] == 1) contador++;                  // arriba
			if (i > 0 && j < N - 1 && tableroMinas[i - 1][j + 1] == 1) contador++; // arriba derecha
			if (j > 0 && tableroMinas[i][j - 1] == 1) contador++;                  // izquierda
			if (j < N - 1 && tableroMinas[i][j + 1] == 1) contador++;              // derecha
			if (i < N - 1 && j > 0 && tableroMinas[i + 1][j - 1] == 1) contador++; // abajo izquierda
			if (i < N - 1 && tableroMinas[i + 1][j] == 1) contador++;              // abajo
			if (i < N - 1 && j < N - 1 && tableroMinas[i + 1][j + 1] == 1) contador++; // abajo derecha
			tableroNumeros[i][j] = contador;
		}
	}
    cout << "Tablero con minas:\t\tTablero con conteo de minas alrededor:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tableroMinas[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < N; j++) {
            cout << tableroNumeros[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}