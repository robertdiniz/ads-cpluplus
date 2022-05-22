#include <iostream>
using namespace std;

int main() {

  int vendas, valorTotalVendas, salarioFixo, 
  comissao, salarioFinal;

  cout << "Quantos carros você vendeu? " << endl;
  cin >> vendas;

  cout << "Qual foi o valor total de vendas? " << endl;
  cin >> valorTotalVendas;

  cout << "Qual o salário fixo? " << endl;
  cin >> salarioFixo;

  cout << "Quanto você recebe por carro vendido? " << endl;
  cin >> comissao;

  salarioFinal = (vendas*comissao) + (valorTotalVendas*0.05) + salarioFixo;

  cout << "Seu salário final é de: R$" << salarioFinal << endl;
  
  return 0;
}