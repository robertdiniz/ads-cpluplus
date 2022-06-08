#include <iostream>
using namespace std;

int main() {

  int distancia, tempo;
  float resultado;

  cout << "Digite em metros a distância: " << endl;
  cin >> distancia;

  cout << "Digite em segundos o tempo: " << endl;
  cin >> tempo;

  resultado = (distancia * 1000 ) / (tempo * 60);

  cout << "Convertendo para metros por segundos fica: " << resultado << 
  "m/s" << endl;
  
  return 0;
}