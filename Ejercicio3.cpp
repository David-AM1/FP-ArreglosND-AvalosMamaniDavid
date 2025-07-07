#include <iostream>
using namespace std;

int main(){
	int matriz[4][4] = {
		{1,  2,  3,  4},
		{5,  6,  7,  8},
		{9, 10, 11, 12},
		{13,14, 15, 16}
	};
	int primeraSuma = 0;
	int segundaSuma = 0;
	for(int i = 0; i < 4; i++){
		primeraSuma += matriz[i][i];
		segundaSuma += matriz[3 - i][i];
	}
	cout << "Suma de la primera diagonal: " << primeraSuma << endl;
	cout << "Suma de la segunda diagonal: " << segundaSuma << endl;
	return 0;
}
