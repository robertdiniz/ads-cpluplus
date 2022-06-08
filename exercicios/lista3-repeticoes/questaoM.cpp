#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que leia dez valores numéricos reais e apresente no 
  final o somatório e a média dos valores lidos.
  */

  float cont = 0;
  float num, sum = 0, md;
  
  while(cont < 10){

    cout << "Digite 10 valores númericos reais: " << endl;
    cin >> num;
    
    sum += num;
    
    cont++;
  }

  md = sum / 10;

  cout << "A soma de todos os números foram: " << sum << endl;
  cout << "A média de todos os números foram: " << md << endl;
  
  return 0;
}