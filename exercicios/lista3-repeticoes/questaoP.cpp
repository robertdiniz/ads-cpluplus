#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente os resultados da soma 
  e da média aritmética dos valores pares situados na faixa 
  numérica de 50 até 70.
  */

  int soma = 0;
  int numeros = 0;
  float md;
  
  for(int i = 50; i <= 70; i+=2){
    if(i % 2 == 0){
      cout << i << endl;
      soma+= i;
      numeros++;
      cout << numeros << endl;
    }
  }

  md = soma / numeros;

  cout << "A soma foi igual: " << soma << endl;
  cout << "A média foi igual a: " << md << endl;
  
  return 0;
}