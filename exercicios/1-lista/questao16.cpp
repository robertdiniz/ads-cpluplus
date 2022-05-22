#include <iostream>
using namespace std;

int main() {

/* Elaborar um programa que leia uma medida em pés, calcular, armazenar e apresentar o seu valor
convertido em metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48
centímetros. */

  float pes, metros;

  cout << "Digite quantos a medida de pés: " << endl;
  cin >> pes;

  metros = pes * 0.3048;

  cout << pes << " para metros dá: " << metros << "m" << endl;
  
  return 0;
}