#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i, posicao;
    double maior;


    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];
    }

maior  = vet[0];

    for (int i = 0; i < n; i++) {
      if (vet[i] > maior) {
        maior = vet[i];
        posicao = i;
      }
    }

    cout << fixed << setprecision(1);
    cout << "\nMAIOR VALOR = " << maior << '\n';
    cout << "POSICAO DO MAIOR VALOR = " << posicao << '\n';
return 0;
}
