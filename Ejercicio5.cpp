#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[4][4] = {
		{7,  2,  9,  4},
		{5,  16, 1,  8},
		{12, 6,  14, 3},
		{11, 10, 13, 0}
	};

	int max = matriz[0][0];
	int min = matriz[0][0];
	int filaMax = 0, columnaMax = 0;
	int filaMin = 0, columnaMin = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(matriz[i][j] > max){
				max = matriz[i][j];
				filaMax = i;
				columnaMax = j;
			}
			if(matriz[i][j] < min){
				min = matriz[i][j];
				filaMin = i;
				columnaMin = j;
			}
		}
	}
	cout << "Valor máximo: " << max << " en Fila " << filaMax << ", Columna " << columnaMax << endl;
	cout << "Valor mínimo: " << min << " en Fila " << filaMin << ", Columna " << columnaMin << endl;
	return 0;
}