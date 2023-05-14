#include <bits/stdc++.h>

    using namespace std;

        int main(){
int n;
double media, soma = 0;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

double a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
      cout << "Digite tres numeros:" << '\n';
      cin >> a[i];
      cin >> b[i];
      cin >> c[i];

      soma = a[i] + b[i] + c[i];
      media = soma / 3;
      cout << fixed << setprecision(1);
      cout << "MEDIA = " << media << '\n';
    }
return 0;
}
