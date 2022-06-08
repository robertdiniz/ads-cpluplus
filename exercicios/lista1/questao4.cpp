#include <iostream>
using namespace std;

int main() {

	float c, f, resultado;
	
	cout << "Digite o grau em fahrenheit" << endl; 
	cin >> f;
	
	resultado = (( f - 32 ) * 5) / 9;
	
	cout << f << "°f em graus celsius é: " << resultado << "°c" << endl; 

	return 0;
}
