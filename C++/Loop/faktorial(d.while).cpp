#include<iostream>
using namespace std;

int main() {
  int counter = 1;
  int faktorial, hasil = 1;

  cout << "Input bilangan yang ingin dihitung : ";
  cin >> faktorial;

  do{
    hasil *= counter;
    counter++;
  }
  while(counter <= faktorial);

  cout << "Hasilnya adalah : " << hasil << endl;
  return 0;

}
