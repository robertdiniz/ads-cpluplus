#include <iostream>
using namespace std;

int main() {

	float n1, n2, resultado;
	
	cout << "Digite a primeira nota: " << endl;
	cin >> n1;
	
	cout << "Digite a segunda nota: " << endl;
	cin >> n2;
	
	resultado = (n1 + n2) / 2;
	
	
	if(resultado >= 6) {
	cout << "Aprovado, sua média é: " << resultado << endl;
	} else {
	cout << "Reprovado, sua média é: " << resultado << endl;
	}
	
	return 0;
}
