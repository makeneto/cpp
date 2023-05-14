#include <bits/stdc++.h>

using namespace std;

int main()
{
      int a;

      cout << "Quantos numeros voce vai digitar? ";
      cin >> a;

      int vet[a];
      for (int i = 0; i < a; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];

        if (vet[i] == 0) {
          cout << "NULO" << '\n';
        }
        else {
          if (vet[i] % 2 == 0) {
            cout << "PAR ";
          }
          else {
            cout << "IMPAR ";
          }
          if (vet[i] < 0) {
            cout << "NEGATIVO" << '\n';
          }
          else {
            cout << "POSITIVO" << '\n';
          }
        }
      }

return 0;
}
