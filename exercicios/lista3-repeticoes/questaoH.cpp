#include <iostream>
#include <math.h>
using namespace std;

int main(){

  /* 
  Escrever um programa que apresente como resultado a potência de   
  uma base qualquer elevada a um expoente qualquer, ou seja, de BE, 
  em que B é o valor da base e E o valor do expoente. 

  Considere apenas a entrada de valores inteiros e 
  positivos, ou seja, de valores naturais. 

  Sugestão: não utilize o formato “base ↑ expoente”, pois é uma   
  solução muito trivial. Use a técnica de laço, em que o valor da 
  base deve ser multiplicado o número de vezes determinado no   
  expoente.
  */

  int B, E;

  cout << "Insira o valor da base e expoente: " << endl;
  cin >> B;
  cin >> E;

  for(int i = 0; i <= 1; i++) {
    int p = pow(B,E);
    if((B < 0) || (E < 0)){
      cout << "Digite apenas valores positivos." << endl;
      break;
    } else {
      cout << "O resultado foi: " << p << endl;
      break;
    }
  }
  return 0;
}

