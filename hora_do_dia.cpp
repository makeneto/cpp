#include "bits/stdc++.h"

int main(){

  int hora;
  
  std::cout << "Digite uma hora do dia: ";
  std::cin >> hora;

  if (hora < 12) {
    std::cout << "Bom dia";
  }
  else if (hora < 18) {
    std::cout << "Boa tarde";
  }
  else {
    std::cout << "Boa noite";
  }

  return 0;
}
