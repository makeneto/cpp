#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i, pares = 0;

    cout << "Quantos numeros serao digitados? ";
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
    }


    cout << "\nNUMERO PARES:" << '\n';
    for (int i = 0; i < n; i++) {
      if (vet[i] % 2 == 0) {
        pares++;
        cout << vet[i] << " ";
      }
    }

    cout << '\n';
    cout  << "\nQUANTIDADE DE PARES = " << pares;
return 0;
}
