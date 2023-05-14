#include "bits/stdc++.h"

using namespace std;

int main(){


  int x, soma = 0;

  cout << "Quantos numeros serao digitados: ";
  cin >> x;

 int A[x];

 for (int i = 0; i < x; i++) {
   cin >> A[i];
 }

int B[x];
 for (int i = 0; i < x; i++) {
   B[i] = A[i] * 2^i;
   soma = soma + B[i];
 }

cout << soma;
return 0;
}
