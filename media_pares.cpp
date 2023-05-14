#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i, pares = 0;
    double media, soma = 0;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
    }

    for (int i = 0; i < n; i++) {
      if (vet[i] % 2 == 0) {
        pares++;
        soma = soma + vet[i];
      }
  }

    if(pares == 0) {
      cout << "NENHUM NUMERO PAR";
    }
    else{
      media = soma / pares;
      cout << fixed << setprecision(1);
      cout << "MEDIA DOS PARES = " << media;
    }

return 0;
}
