#include "bits/stdc++.h"
#include "iomanip"
      using namespace std;
int main()
{
    double area, comprimento, largura, metro_quadrado, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> metro_quadrado;

    area = largura * comprimento;
    preco = area * metro_quadrado;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area <<'\n';
    cout << "Preco do terreno = " << preco <<'\n';
return 0;
}
