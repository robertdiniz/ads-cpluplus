#include <iostream>
using namespace std;
int main(){
  /* O custo de um carro novo ao consumidor 
      é a soma do custo de fábrica com a porcentagem do
      distribuidor e dos impostos (aplicados ao custo de fábrica).           Supondo que o percentual do
        distribuidor seja de 28% e os impostos de 45%, escrever um             algoritmo para ler o custo de fábrica
          de um carro, calcular e escrever o custo final ao                     consumidor.*/

  int custo, resultado;

  cout << "Informe o custo de fábrica: " << endl;
  cin >> custo;

  resultado = ((0.45 * custo) + (0.28 * custo)) + custo;

  cout << "Custo final: R$" << resultado;
  
  return 0;
}