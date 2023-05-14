#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i;
    double media, soma = 0;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
      soma = soma + vet[i];
    }

media = soma /n;

    cout << fixed << setprecision(3);
    cout << "\nMEDIA DO VETOR = " << media << '\n';

    cout << fixed << setprecision(1);
    cout << "ELEMENTOS A BAIXO DA MEDIA:" << '\n';
    for (int i = 0; i < n; i++) {
      if (vet[i] < media) {
        cout << vet[i] << '\n';
      }
    }

return 0;
}
