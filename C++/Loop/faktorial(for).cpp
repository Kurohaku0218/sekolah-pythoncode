#include<iostream>
using namespace std;

int main() {
  int faktorial, counter, hasil = 1;

  cout << "Input bilangan yang ingin dihitung : ";
  cin >> faktorial;

  for(counter = 1; counter <= faktorial; counter++){
    hasil *= counter;
  }

  cout << "Hasilnya adalah : " << hasil << endl;

  return 0;
}
