#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
    }

    cout << "NUMEROS NEGATIVOS:" << '\n';
    for (int i = 0; i < n; i++) {
      if (vet[i] < 0) {
        cout << vet[i] << '\n';
      }
    }
    return 0;
}
