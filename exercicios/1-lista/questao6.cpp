#include <iostream>
using namespace std;

int main() {

	int comp,larg,alt, resultado;
	
	cout << "Informe o comprimento da caixa retangular: " << endl;
	cin >> comp;
	
	cout << "Informe a largura da caixa retangular: " << endl;
	cin >> larg;
	
	cout << "Informe a altura da caixa rentagular: " << endl;
	cin >> alt;
	
	resultado = comp * larg * alt;
	
	cout << "O volume da caixa retangular é: " << resultado << endl;

	return 0;
}
