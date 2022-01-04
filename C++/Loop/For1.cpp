/*
Membuat bangun datar persegi
menggunakan Perulangan Loop 
*/

#include<iostream>
using namespace std;

int main() {
  int x, y, sum;

  cout << "Input Total : ";
  cin >> sum;

  for(x = 0; x <= sum; x++){
    for(y = 0; y <= sum; y++){
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
  }
