#include <iostream>
using namespace std;

int main() {

// Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
//Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.

  float nota1, nota2, nota3, media;

  cout << "Digite a primeira nota: " << endl;
  cin >> nota1;

  cout << "Digite a segunda nota: " << endl;
  cin >> nota2;

  cout << "Digite a terceira nota: " << endl;
  cin >> nota3;

  media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

  cout << "Sua média final é de: " << media << endl;
  
  return 0;
}