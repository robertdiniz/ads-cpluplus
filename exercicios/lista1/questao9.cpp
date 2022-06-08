#include <iostream>
using namespace std;

int main() {

	int eleitores, votosBrancos, nulos, validos;
	float porcentBrancos, porcentNulos, porcentValidos;
	
	cout << "Quantos eleitores teve no município? " << endl;
	cin >> eleitores;
	
	cout << "Quantos votos brancos teve? " << endl;
	cin >> votosBrancos;
	
	cout << "Quantos votos válidos teve? " << endl;
	cin >> validos;

  	cout << "Quantos votos nulos teve? " << endl;
	cin >> nulos;
	
  	porcentBrancos = (votosBrancos * eleitores) / 100;
  	porcentNulos = (nulos * eleitores) / 100;
  	porcentValidos = (validos * eleitores) / 100;

  	cout << "Para o total de eleitores: \n";
  	cout << eleitores << " eleitores," << porcentBrancos << "% são brancos. \n";
  	cout << eleitores << " eleitores," << porcentNulos << "% são nulos. \n";
  	cout << eleitores << " eleitores," << porcentValidos << "% são validos.";
	return 0;
}
