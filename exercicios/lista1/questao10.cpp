#include <iostream>
using namespace std;

int main() {

  /* Escreva um algoritmo para ler o salário mensal atual de um 
    funcionário e o percentual de reajuste.
    Calcular e escrever o valor do novo salário. */ 

  float salario, percentual, salarioAtual;

  cout << "Informe o seu salário atual: " << endl;
  cin >> salario;

  cout << "Informe a porcentagem do reajuste salarial: " << endl;
  cin >> percentual;

  salarioAtual = salario * (percentual / 100);

  cout << "Novo salário com reajuste: R$" << salarioAtual + salario << endl;
  
  return 0;
}
