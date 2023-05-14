#include "bits/stdc++.h"

using namespace std;

int main()
{
    string nome1, nome2;
    int n1, n2;
    double media;

    cout << "Dados da primeira pessoa: "<<'\n';
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> n1;
    cout << "Dados da segunda pessoa:" << '\n';
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');       //------------------limpeza de buffer
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> n2;

    media = (n1 + n2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos.";
return 0;
}
