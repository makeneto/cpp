#include "bits/stdc++.h"

int main(){

      int n1, n2, n3, menor = 0;

      std::cout << "Primeiro valor: ";
      std::cin >> n1;
      std::cout << "Segundo valor: ";
      std::cin >> n2;
      std::cout << "Terceiro valor: ";
      std::cin >> n3;


      if (n1 < n2 && n1 < n3) {
        menor = n1;
      }
      else if (n2 < n1 && n2 < n3) {
        menor = n2;
      }
      else {
        menor = n3;
      }

      std::cout << "MENOR = " << menor;
return 0;
}
