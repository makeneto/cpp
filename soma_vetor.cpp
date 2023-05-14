#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i;
    double media, soma = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
      soma = soma + vet[i];
    }

    cout << "VALORES = ";
    for (int i = 0; i < n; i++) {
      cout << vet[i] << " " <<'\n';
    }


    for (int i = 0; i < n; i++) {
      media = soma / n;
    }

    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << '\n';
    cout << "MEDIA = " << media;
    return 0;
}
