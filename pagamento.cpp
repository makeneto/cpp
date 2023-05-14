#include "bits/stdc++.h"

using namespace std;

int main() {

  string nome;
  double Vhoras, pagamento;
  int Thoras;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> Vhoras;
    cout << "Horas trabalhadas: ";
    cin >> Thoras;

    pagamento = Vhoras * Thoras;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento;
    return 0;
}
