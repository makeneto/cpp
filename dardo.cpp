#include "bits/stdc++.h"
    using namespace std;

int main(){

  double a, b, c, maior;

  cout << "Digite as tres distancias:"<<'\n';
  cin >> a;
  cin >> b;
  cin >> c;

  if (a > b && a > c) {
    maior = a;
  } else if (b > a && b > c) {
    maior = b;
  } else {
    maior = c;
  }

  cout << fixed << setprecision(2);
  cout << "MAIOR DISTANCIA = " << maior;

return 0;
}
