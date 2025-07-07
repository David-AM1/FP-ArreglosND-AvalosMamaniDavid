#include <iostream>
using namespace std;

int main() {
	const int N = 5;
	int matriz[N][N] = {
		{ 1,  2,  3,  4,  5},
		{ 6,  7,  8,  9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};

	int inicioFila = 0, finFila = N - 1;
	int inicioColumna = 0, finColumna = N - 1;

	cout << "Recorrido en espiral:\n";
	while (inicioFila <= finFila && inicioColumna <= finColumna) {
		for (int columna = inicioColumna; columna <= finColumna; columna++) {
			cout << matriz[inicioFila][columna] << " ";
		}
		inicioFila++;
		for (int fila = inicioFila; fila <= finFila; fila++) {
			cout << matriz[fila][finColumna] << " ";
		}
		finColumna--;
		if (inicioFila <= finFila) {
			for (int columna = finColumna; columna >= inicioColumna; columna--) {
				cout << matriz[finFila][columna] << " ";
			}
			finFila--;
		}
		if (inicioColumna <= finColumna) {
			for (int fila = finFila; fila >= inicioFila; fila--) {
				cout << matriz[fila][inicioColumna] << " ";
			}
			inicioColumna++;
		}
	}
	cout << endl;
	return 0;
}