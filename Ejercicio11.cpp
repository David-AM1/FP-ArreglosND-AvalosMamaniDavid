#include <iostream>
using namespace std;

const int N = 10;

int main() {
	int bosque[N][N] = {
		{0,0,0,0,0,0,0,0,0,0},
		{0,1,1,0,0,0,0,0,0,0},
		{0,1,2,0,0,0,0,0,0,0},
		{0,2,2,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,1,1,1,0,0,0},
		{0,0,0,0,1,2,1,0,0,0},
		{0,0,0,0,1,1,1,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	int nuevoBosque[N][N];

	cout << "Bosque Inicial:\n";
	for (int fila = 0; fila < N; fila++) {
		for (int columna = 0; columna < N; columna++) {
			cout << bosque[fila][columna] << " ";
		}
		cout << endl;
	}
	for (int fila = 0; fila < N; fila++) {
		for (int columna = 0; columna < N; columna++) {
			if (bosque[fila][columna] == 0) {
				bool tieneVecinoQuemando = false;
				for (int desplazFila = -1; desplazFila <= 1; desplazFila++) {
					for (int desplazColumna = -1; desplazColumna <= 1; desplazColumna++) {
						int vecFila = fila + desplazFila;
						int vecColumna = columna + desplazColumna;
						if (vecFila >= 0 && vecFila < N && vecColumna >= 0 && vecColumna < N) {
							if (vecFila != fila || vecColumna != columna) {
								if (bosque[vecFila][vecColumna] == 1) {
									tieneVecinoQuemando = true;
								}
							}
						}
					}
				}

				if (tieneVecinoQuemando) {
					nuevoBosque[fila][columna] = 1;
				} else {
					nuevoBosque[fila][columna] = 0;
				}
			}
			else if (bosque[fila][columna] == 1) {	//quemandose se vuelve quemado
				nuevoBosque[fila][columna] = 2;
			}
			else {	// quemado permanece igual
				nuevoBosque[fila][columna] = 2;
			}
		}
	}
	cout << "\nBosque después de propagación:\n";
	for (int fila = 0; fila < N; fila++) {
		for (int columna = 0; columna < N; columna++) {
			cout << nuevoBosque[fila][columna] << " ";
		}
		cout << endl;
	}
	return 0;
}