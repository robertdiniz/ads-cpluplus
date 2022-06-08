#include <iostream>
using namespace std;
int main() {

  /*
  Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a
  qual deve ser apresentada de acordo com sua forma tradicional.
*/
  
  int num;

  cout << "Digite o número da tabuada: " << endl;
  cin >> num;

  for(int i = 0; i <= 10; i++){
    cout << num << " x " << i << " = " << num * i << endl;
  }
  
  return 0;
}