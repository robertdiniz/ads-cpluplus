#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente o somatório dos valores pares existentes na faixa
  de 1 até 500.
*/

  int somatorio = 0;

  for(int i = 0; i <= 500; i+=2){
    cout << i << endl;
    somatorio += i;
  }
  
  cout << somatorio;
  
  return 0;
}