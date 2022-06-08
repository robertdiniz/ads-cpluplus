#include <iostream>
using namespace std;

int main(){

  /* 
  Construir um programa que apresente como resultado a fatorial dos 
  valores ímpares situados na faixa numérica de 1 até 10.
  */

  int prod = 1, aux = 1;
  
  for(int n = 1; n <= 10; n++){ // vai contar de 1 até 10
    while(n % 2 != 0){ // verifica se o número é ímpar
        for(int i = aux; i <= n; i++){ // aux que vai de 1 até o n...
          prod *= i; // calcula o produto do fatorial
        }
      cout << "Fatorial de " << n << " é " << prod << endl;
      prod = 1;
      break;
    }
  }

  return 0;
}