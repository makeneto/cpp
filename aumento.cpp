#include "bits/stdc++.h"
#include "iomanip"

using namespace std;

int main()
{
  double salario, aumento, novoS;
  int porcentagem;

  cout << "Digite o salario da pessoa: ";
  cin >> salario;

  if (salario <= 1000.00) {
    porcentagem = 20;
    aumento = (salario * porcentagem) / 100;
    novoS = aumento + salario;
  }
  else if (salario <= 3000.00) {
    porcentagem = 15;
    aumento = (salario * porcentagem) / 100;
    novoS = aumento + salario;
  }
  else if(salario <= 8000.00) {
    porcentagem = 10;
    aumento = (salario * porcentagem) / 100;
    novoS = aumento + salario;
  }
  else {
    porcentagem = 5;
    aumento = (salario * porcentagem) / 100;
    novoS = aumento + salario;
  }

  cout << fixed << setprecision(2);
  cout << "Novo salario = R$ "<< novoS <<'\n';
  cout << "Aumento = R$ "<< aumento <<'\n';
  cout << "Porcentagem = R$ "<< porcentagem<<"%"<<'\n';
return 0;
}
