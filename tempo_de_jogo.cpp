#include "bits/stdc++.h"

using namespace std;

int main()
{
  int hora_inicial, hora_final;

  cout << "Hora inicial: ";
  cin >> hora_inicial;
  cout << "Hora Final: ";
  cin >> hora_final;

  if (hora_inicial < hora_final) {
    cout <<"O JOGO DUROU " << hora_final - hora_inicial << " HORA(S)";
  } else {
    cout << "O JOGO DUROU " << 24 - (hora_inicial - hora_final) << " HORA(S)";
  }
return 0;

}
