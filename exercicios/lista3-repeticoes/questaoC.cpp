#include <iostream>
using namespace std;
int main() {

  /*
  Construir um programa que apresente a soma dos cem primeiros números naturais (1 +
  2 + 3 +...+ 98 + 99 + 100).
*/

  int cont = 1;
  int soma;
  
  while(cont<=100){
    soma = soma + cont;
    cont++;
  }

  cout << soma;
  
  return 0;
}