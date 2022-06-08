#include <iostream>
using namespace std;

int main() {

  float a, b, soma, subt, mult, div;

  cout << "Digite o valor de a: " << endl;
  cin >> a;

  cout << "Digite o valor de b: " << endl;
  cin >> b;

  soma = a + b;
  subt = a - b;
  mult = a * b;
  div = a / b;

  cout << a << " + " << b << " somando é: " << soma << endl;
  cout << a << " - " << b << " subtraindo é: " << subt << endl;
  cout << a << " * " << b << " multiplicando é: " << mult << endl;
  cout << a << " / " << b << " dividindo é: " << div << endl;
  
  return 0;
}