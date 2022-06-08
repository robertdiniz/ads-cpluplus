#include <iostream>
using namespace std;

int main(){

  /* 
  Escrever um programa que possibilite calcular a área total em metros de 
  uma residência com os cômodos sala, cozinha, banheiro, dois quartos, área 
  de serviço, quintal,garagem, entre outros que podem ser fornecidos ao 
  programa. 
  O programa deve solicitar a entrada do nome, da largura e do comprimento 
  de um determinado cômodo.
  Em seguida, deve apresentar a área do cômodo lido e também uma mensagem
  solicitando ao usuário a confirmação de continuar calculando novos 
  cômodos. 
  Caso o usuário responda “NÃO”, o programa deve apresentar o valor total 
  acumulado da área residencial.
  */

  int cont = 0, totalArea = 0, areaParc = 0, larg, comp;
  string opcao;
  string comodo;

  while(cont <= 0) {
  cout << "Qual nome do cômodo? " << endl;
  cin >> comodo;
  cout << "Digite a largura e o comprimento do cômodo: " << endl;
  cin >> larg;
  cin >> comp;
  areaParc = larg * comp;
  totalArea += areaParc;
  cout << "A área do cômodo " << comodo << " é de: " << areaParc << "m³." << 
  endl;
  cont = 1;
    while(cont == 1){
    cout << " \nDeseja acrescentar mais cômodos? \n SIM ou NÃO " << endl;
    cin >> opcao;
      while(opcao == "SIM"){
        cont = 0;
        break;
      } while (opcao == "NÃO"){
        cont = 2;
        break;
      }
    }
  }

  cout << "O valor total da área residencial é de: " << totalArea << "m³." <<  endl;
  
  return 0;
}