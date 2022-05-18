#include <iostream>
#include <math.h>
using namespace std;

int main() {

	float r, resultado;
	cout << "Informe o valor do raio da esfera: " << endl;
	cin >> r;
	resultado = (4 * 3.14159 * (pow(r,3)))/3;
	cout << "O volume da esfera é: " << resultado << endl;

	return 0;
}
