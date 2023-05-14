#include "bits/stdc++.h"

using namespace std;

int main ()
{
    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    do {
      cout << " Senha Incorreta! Tente novamente: ";
      cin >> senha;
    } while(senha != 2005);

    cout << "Acesso permitido!";
  return 0;
}
