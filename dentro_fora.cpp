#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, dentro = 0, fora = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite um numero: ";
      cin >> vet[i];

      if (vet[i] < 10 || vet[i] > 20){
        fora++;
      }
      else {
        dentro++;
      }
    }

    cout << dentro << " DENTRO" << '\n';
    cout << fora << " FORA" << '\n';
return 0;
}
