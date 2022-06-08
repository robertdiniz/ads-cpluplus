#include <iostream>
using namespace std;

int main() {

	float c, f, resultado;
	
	cout << "Informe o grau celsius: " << endl;
	cin >> c;
	
	resultado = (c * 9/5) + 32;
	
	cout << c << "°c em convertido para Fahrenheit é: " << resultado << 		"°f" << endl;

	return 0;
}
