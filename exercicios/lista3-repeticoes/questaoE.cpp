#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que apresente todos os valores numéricos inteiros ímpares
  situados na faixa de 0 a 20. 
  Sugestão: para verificar se o valor numérico é ímpar,   dentro
  do laço de repetição, fazer a verificação lógica dessa condição com a instrução
  se/fim_se dentro do próprio laço, perguntando se o valor numérico do contador é ímpar
  (se o resto do número dividido por 2 é diferente de zero); sendo, mostre-o; não sendo,
  passe para o próximo valor numérico.
*/

  for(int i = 1; i < 20; i++){
    if(i % 2 != 0) { // Se o valor de resto 2 for diferente de 0 imprima
      cout << i << " é ímpar." << endl;
    }
  }
  
  return 0;
}