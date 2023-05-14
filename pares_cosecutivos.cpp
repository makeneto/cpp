#include "bits/stdc++.h"

using namespace std;

int main(){

int x, soma;

    do {
      cout << "Digite um numero inteiro: ";
      cin >> x;

      if (x % 2 != 0) {
        x++;
      }

      soma = 5 * x + 20;
      cout << "SOMA = " << soma << '\n';
    } while(x != 0);

return 0;
}
