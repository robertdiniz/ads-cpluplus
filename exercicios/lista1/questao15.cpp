#include <iostream>
using namespace std;

int main() {

// Faça um algoritmo que converta graus em radianos. Imprima o valor em radianos e o seu correspondente em graus.

  float graus, radiano; 

  cout << "Digite um valor em graus: " << endl;
  cin >> graus;

  radiano = graus * 3.14 / 180;

  cout << "Valor em radianos: " << radiano << "rad." << endl;
  cout << "Valor correspondente a graus: " << graus << ".pi/180" << endl;
  
  return 0;
}