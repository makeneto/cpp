#include "bits/stdc++.h"

  using namespace std;

int main (){

    int n, i;


    cout << "Quantos valores vai ter cada vetro? ";
    cin >> n;

    int A[n], B[n];

    cout << "Digite os valores do vetor A:" << '\n';
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    cout << "Digite os valores do vetor B:" << '\n';
    for (int i = 0; i < n; i++) {
      cin >> B[i];
    }

    int C[n];
    cout << "VETOR RETULTANTE:"<< '\n';
    for (int i = 0; i < n; i++) {
      C[i] = A[i] + B[i];
      cout << C[i] << '\n';
    }

return 0;
}
