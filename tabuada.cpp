#include "bits/stdc++.h"

using namespace std;

int main(){

    int n, resultado;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
      resultado = n * i;
      cout << n <<" x "<< i <<" = "<< resultado <<'\n';
    }
return 0;
}
