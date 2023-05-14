#include "bits/stdc++.h"

using namespace std;

int main (){

  int x, y;

  do {
    cout << "Digite os valores das coordenadas X e Y: "<<'\n',
    cin >> x;
    cin >> y;

    if(x > 0 && y > 0){
      cout <<"QUADRANTE Q1\n";
    }
    else if(x < 0 && y > 0){
      cout <<"QUADRANTE Q2\n";
    }
    else if(x < 0 && y < 0){
      cout <<"QUADRANTE Q3\n";
    }
    else if (x > 0 && y < 0) {
      cout << "QUADRANTE Q4\n";
    }
  } while(x != 0);
}
