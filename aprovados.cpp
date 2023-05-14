#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i;
    double media, soma = 0, aprovados;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nome[n];
    double n1[n], n2[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite nome, primeira e segunda nota do " << i+1 <<"o aluno:"<< '\n';
      cin.ignore(INT_MAX, '\n');
      getline(cin, nome[i]);      //------limpeza de buffer
      cin >> n1[i];
      cin >> n2[i];
    }

    cout << "Alunos aprovados:" << '\n';
    for (int i = 0; i < n; i++) {
      media = (n1[i] + n2[i]) / 2;
      if (media >= 6.0) {
        cout << nome[i] << '\n';
      }
    }


return 0;
}
