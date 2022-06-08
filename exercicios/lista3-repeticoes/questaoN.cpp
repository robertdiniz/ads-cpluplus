#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que leia sucessivamente valores numéricos e 
  apresente no final o somatório, a média e o total de valores lidos. 
  O programa deve ler os valores enquanto o usuário estiver
  fornecendo valores positivos. Ou seja, o programa deve 
  parar quando o usuário fornecer um valor negativo (menor que zero).
  */

  int cont = 0;
  int numero = 0;
  int numeros = 0;
  int soma = 0;
  float md;

  while(cont <= 0){
    cout << "Digite algum valor: " << endl;
    cin >> numero;
    while(numero < 0){
      cont++;
      break;
    }
    while(numero > 0){
    soma = soma + numero;
    numero = 0;
    cout << soma << endl;
    numeros++;
    cout << numeros << endl;
    }
  }

  md = soma / numeros;
  
  cout << "O somatório dos valores: " << soma << endl;
  cout << "A médias dos valores: " << md << endl;
  cout << "A quantidade de valores inseridos: " << numeros;
  
  return 0;
}