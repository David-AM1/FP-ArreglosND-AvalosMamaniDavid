#include <iostream>
using namespace std;

int main(){
	int matriz[4][4] = {
		{1,  2,  3,  4},
		{5,  6,  7,  8},
		{9, 10, 11, 12},
		{13,14, 15, 16}
	};
	int fila1, fila2;

	cout << "Matriz:"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nFilas a intercambiar:"<<endl;
	cin >> fila1;
	cin >> fila2;
	for(int j = 0; j < 4; j++){
		int temp = matriz[fila1][j];
		matriz[fila1][j] = matriz[fila2][j];
		matriz[fila2][j] = temp;
	}
	cout << "\nMatriz resultante:"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}