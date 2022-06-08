#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que leia valores positivos inteiros até que um 
  valor negativo seja informado. Ao final devem ser apresentados o 
  maior e o menor valores informados pelo usuário.
  */

  int numero = 0;
  int cont = 0;
  int maior = 0, menor = 0, menorPos = 0;

  while(cont >= 0){
    cout << "Digite um valor positivo inteiro: " << endl;
    cin >> numero;
    while(numero > maior){
      maior = numero;
      break;
    }
    while(numero < maior){
      menor = numero;
      break;
    }
    while(numero > 0 && numero < maior) {
      menorPos = numero;
      break;
    }
    while(numero < 0){
      cont = -1;
      break;
    }
  }

  cout << "O maior número é: " << maior << endl;
  cout << "O menor número positivo é: " << menorPos << endl;
  cout << "O menor número é: " << menor << endl;
  
  
  return 0;
}