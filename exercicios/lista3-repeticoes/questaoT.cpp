#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente os quadrados sem armazená-los na 
  memória dos valores inteiros existentes na faixa de valores de 15 a 
  200 com saltos de 3 em 3.
  */

  int aux = 15, num;

  while(aux <= 200){
    cout << aux << endl;
    aux+=3;
  }
  
  
  return 0;
}