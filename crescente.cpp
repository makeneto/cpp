#include "bits/stdc++.h"

using namespace std;

int main(){

  int a, b;

  cout << "Digite dois numeros:"<< '\n';
  cin >> a;
  cin >> b;

  while (a != b) {
    if (a < b) {
      cout << "CRESCENTE!"<<'\n';
    }
    else{
      cout << "DECRESCENTE!" << '\n';
    }
    cout << "Digite outros dois numeros:"<<'\n';
    cin >> a;
    cin >> b;
  }
  return 0;
}
