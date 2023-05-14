#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i, mais_velho, posicaomaior;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nome[n];
    int idade[n];

    for (int i = 0; i < n; i++) {
      cout << "Dados da " << i+1 << "a pessoa:" << '\n';
      cout << "NOME: ";
      cin.ignore(INT_MAX, '\n');    //------- limpeza de buffer
      getline(cin, nome[i]);
      cout << "IDADE: ";
      cin >> idade[i];
    }

    mais_velho = idade[0];

    for (int i = 0; i < n; i++) {
      if (idade[i] > mais_velho) {
        mais_velho = idade[i];
        posicaomaior = i;
      }
    }

    cout << "Pessoa mais velha: " << nome[posicaomaior];
return 0;
}
