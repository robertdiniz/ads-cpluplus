#include <iostream>
using namespace std;

int main(){

  /* 
  Elaborar um programa que leia quinze valores numéricos inteiros e   
  no final apresente o somatório da fatorial de cada valor lido.
  */

  int cont = 0, n, somatorio = 0, fat = 1;

  while(cont < 15){
    cout << "Digite quinze valores: " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
      fat = fat * i;
    }
     somatorio = somatorio + fat;
     cout<<"soma = "<<somatorio<<endl;
     fat = 1;
    
    cont++;
  }

  cout << "O resultado da soma é: " << somatorio;
  
  return 0;
}