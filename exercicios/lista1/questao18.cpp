#include <iostream>
using namespace std;

int main() {

  /* Construir um programa que leia um valor numérico inteiro e apresente como resultado
armazenado em memória os seus valores sucessor e antecessor. */ 
  
  int numero, sucessor, antecessor;

  cout << "Digite um valor: " << endl;
  cin >> numero;

  sucessor = numero + 1;
  antecessor = numero - 1;

  cout << "O antecessor do valor é: " << antecessor << endl;
  cout << "O sucessor do valor é: " << sucessor << endl;
  
  return 0;
}