#include <bits/stdc++.h>

      using namespace std;

int main(){

int n, num, den;
double divisao;

        cout << "Quantos casos voce vai digitar? ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Entre com o numerador: ";
            cin >> num;
            cout << "Entre com o denominador ";
            cin >> den;

            if (den == 0) {
              cout << "DIVISAO IMPOSSIVEL" << '\n';
            }
            else {
              divisao = num / den;
              cout << fixed << setprecision(2);
              cout << "DIVISAO = " << divisao << '\n';
            }
        }
return 0;
}
