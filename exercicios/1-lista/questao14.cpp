#include <iostream>
#include <math.h>
using namespace std;

int main () {

  int x1, x2, y1, y2;
  float distancia;

  cout << "Insira o valor de x1: " << endl;
  cin >> x1;

  cout << "Insira o valor de x2: " << endl;
  cin >> x2;

  cout << "Insira o valor de y1: " << endl;
  cin >> y1;

  cout << "Insira o valor de y2: " << endl;
  cin >> y2;

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  cout << "A distância é de: " << distancia;
  
  return 0;
}