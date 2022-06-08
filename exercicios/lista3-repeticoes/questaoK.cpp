#include <iostream>
using namespace std;

int main(){

  /* 
  Escrever um programa que calcule e apresente o somatório do número 
  de grãos de trigo que se pode obter em um tabuleiro de xadrez, 
  obedecendo à seguinte regra: colocar um grão de trigo no primeiro 
  quadro, e nos quadros seguintes, o dobro do quadro anterior.

  Ou seja, no primeiro quadro coloca-se um grão, no segundo quadro 
  colocam-se dois
  grãos (neste momento têm-se três grãos), no terceiro quadro 
  colocam-se quatro grãos (tendo neste momento sete grãos), 
  no quarto quadro colocam-se oito grãos (tendo-se, então, 15 grãos), 
  até atingir o sexagésimo quarto quadro18.
  */

  double somatorio = 0, graos = 1;
  
  for(int i = 1; i<=64; i++){
    somatorio = somatorio + graos;
    graos = graos * 2;
  }
  
  cout << "Somatório: " << somatorio << endl;
  
  return 0;
}