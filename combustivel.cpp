#include "bits/stdc++.h"

using namespace std;

int main(){

  int alcool = 0, gasolina = 0, diesel = 0, codigo;

  do {
    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;

    if (codigo == 1) {
      alcool++;
    }
    else if (codigo == 2) {
      gasolina++;
    }
    else if (codigo == 3) {
      diesel++;
    }
  } while(codigo != 4);

  cout << "Alcool = " << alcool <<'\n';
  cout << "Gasolina = " << gasolina << '\n';
  cout << "Diesel = " << diesel <<'\n';
  return 0;
}
