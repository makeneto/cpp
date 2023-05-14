#include "bits/stdc++.h"

using namespace std;

int main(){

  int idades, cont = 0, soma = 0;
  double media;


  cout << "Digite as idades:"<<'\n';
  cin >> idades;

  if (idades < 0) {
    cout << "IMPOSSIVEL CALCULAR";
  }
  else{
    while (idades > 0) {
      cont++;
      soma = soma + idades;
      cin >> idades;
    }
  }

  media = soma / cont;

  cout << fixed << setprecision(2);
  cout<< "MEDIA = " << media;
}
