#include "bits/stdc++.h"

using namespace std;

int main()
{
    double raio, area, r;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = 3.14159 * raio * raio;

    cout << fixed << setprecision(3);
    cout << "AREA = " << area <<'\n';
    return 0;
}
