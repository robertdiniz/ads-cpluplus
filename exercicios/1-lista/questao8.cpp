#include <iostream>
using namespace std;

int main() {

	int idadeAnos, idadeMeses, idadeDias, result;
	
	cout << "Digite sua idade em Anos: " << endl;
	cin >> idadeAnos;
	
	cout << "Digite quantos Meses: " << endl;
	cin >> idadeMeses;
	
	cout << "Digite quantos Dias: " << endl;
	cin >> idadeDias;
	
	result = idadeAnos * 365 + idadeMeses * 30 + idadeDias;
	
	cout << "Sua idade em dias: " << result;

	return 0;
}
