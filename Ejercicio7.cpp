#include <iostream>
using namespace std;

int main() {
	const int N = 4;
	int matriz[N][N] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 1, 2, 3},
		{4, 5, 6, 7}
	};

	int rotada[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			rotada[j][N - 1 - i] = matriz[i][j];
		}
	}
	cout << "Matriz rotada 90 grados en sentido horario:\n";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << rotada[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}