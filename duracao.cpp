#include "bits/stdc++.h"
#include "math.h"

using namespace std;

int main(){

  int hora, resto, minutos, segundos, duracao;

  cout << "Digite a duracao em segundos: ";
  cin >> duracao;

  hora = duracao / 3600;
  resto = duracao % 3600;

  minutos = resto / 60;
  segundos = resto % 60;

  cout << hora <<":"<< minutos<<":"<< segundos;

  return 0;
}
