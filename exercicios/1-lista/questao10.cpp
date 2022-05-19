#include <iostream>
using namespace std;

int main() {
  
  /* Escreva um algoritmo para ler o salário mensal atual de um 
  funcionário e o percentual de reajuste.
  Calcular e escrever o valor do novo salário. */ 

  float salario, percentual, resultado;

  cout << "Informe o seu salário atual: " << endl;
  cin >> salario;

  cout << "Informe a porcentagem do reajuste salarial: " << endl;
  cin >> percentual;

  resultado = salario * (percentual / 100);

  cout << "Salário com reajuste: " << resultado << endl;
  
  return 0;
}
