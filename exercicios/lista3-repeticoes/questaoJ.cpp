#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente os valores de   
  conversão de graus Celsius em graus Fahrenheit, 
  de dez em dez graus, iniciando a contagem em dez graus   
  Celsius e finalizando em cem graus Celsius. 
  O programa deve apresentar os valores das duas
  temperaturas.
  */

  int celsius;
  
  for(int i = 10; i <= 100; i+=10){
    celsius = ((i * 1.8) + 32);
    cout << i << "°c para Fahrenheit " << celsius << "°f" << endl;
  }
  
  return 0;
}

