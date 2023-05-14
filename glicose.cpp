#include "bits/stdc++.h"
#include "iomanip"
using namespace std;
int main(){

  double x;

  cout << "Digite a medida da glicose: ";
  cin >> x;

  cout << "Classificacao: ";

  if (x <= 100) {
    cout << "Normal";
  }
  else if (x <= 140) {
    cout << "Elevado";
  }
  else {
    cout << "Diabetes";
  }
}
