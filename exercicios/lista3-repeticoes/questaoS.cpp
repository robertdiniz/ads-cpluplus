#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente o resultado inteiro da divisão de 
  dois números quaisquer, representando o dividendo e o divisor da 
  divisão a ser processada. Sugestão: para a elaboração do programa, 
  não utilize o operador aritmético de divisão com quociente inteiro 
  div. Use uma solução baseada em laço. O programa deve apresentar
  como resultado (quociente) quantas vezes o divisor cabe no dividendo.
  */

  int divisor, dividendo, resultado = 0, x;
  
  cout << "Digite o valor do dividendo: " << endl;
  cin >> dividendo;

  cout << "Digite o valor do divisor: " << endl;
  cin >> divisor;
  
  x = divisor;
  while(divisor>=dividendo){
    dividendo+=x;
    resultado++;
  }
  
  cout << "O resultado inteiro: " << resultado << endl;
  
  return 0;
}