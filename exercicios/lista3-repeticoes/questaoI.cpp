#include <iostream>
using namespace std;

int main(){

  /* 
  Escrever um programa que apresente os valores da sequência   
  numérica de Fibonacci até o décimo quinto termo. 

  A sequência de Fibonacci é formada pelos valores numéricos
  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc., 
  obtendo-se o próximo termo a partir da soma do termo atual 
  com o anterior sucessivamente até o infinito se a sequência 
  não for interrompida, sendo determinada a partir 
  da fórmula Fn = Fn-1 + Fn-2.
  */

  int t3, t1 = 0, t2 = 1;

  for(int i = 2; i <= 15; i++){
    t3 = t1 + t2;
    cout << t3 << " ";
    t1 = t2;
    t2 = t3;
  }

  // Observação: pulou o 0 e 1, o último é o 15° termo.
  
  return 0;
}

