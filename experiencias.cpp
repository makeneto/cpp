#include "bits/stdc++.h"

      using namespace std;

int main()
{

    int n, qtd_cobaias, total, total_coelhos = 0, total_ratos = 0, total_sapos = 0;
    double porcentual_coelhos, porcentual_ratos, porcentual_sapos;
    char tipo_cobaias;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
      cout << "Quantidade de cobaias: ";
      cin >> qtd_cobaias;
      cout << "Tipo de cobaias: ";
      cin >> tipo_cobaias;
    }

    if (tipo_cobaias == 'C') {
      total_coelhos = total_coelhos + qtd_cobaias;
    }
    else if (tipo_cobaias == 'R') {
      total_ratos = total_ratos + qtd_cobaias;
    }
    else if(tipo_cobaias == 'S') {
      total_sapos = total_sapos + qtd_cobaias;
    }

    total = total_ratos + total_sapos + total_coelhos;
    porcentual_coelhos = (total_coelhos / total) * 100.0;
    porcentual_ratos = (total_ratos / total) * 100.0;
    porcentual_sapos = (total_sapos / total) * 100.0;

    cout << fixed << setprecision(2);
    cout <<'\n' << "RELATORIO FINAL:" << '\n';
    cout << "Total: " << total << " cobaias" << '\n';
    cout << "Total de coelhos: " << total_coelhos << '\n';
    cout << "Total de ratos: " << total_ratos << '\n';
    cout << "Total de sapos: " << total_sapos << '\n';
    cout << "Percentual de coelhos: " << porcentual_coelhos << '\n';
    cout << "Percentual de ratos: " << porcentual_ratos << '\n';
    cout << "Percentual de sapos: " << porcentual_sapos << '\n';
return 0;
}
