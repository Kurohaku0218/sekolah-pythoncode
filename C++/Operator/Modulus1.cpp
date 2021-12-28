/*
Contoh Program Modulus
Untuk mengetahui Bilangan Genap
ataupun Ganjil yang diinput oleh User
*/

#include<iostream>
using namespace std;

int main() { 
  int modul, hasil;
  
  cout << "Input Angka : ";
  cin >> modul;
  
  //Proses mencari hasil
  hasil = modul % 2;
  
  //Output untuk Bilangan Genap
  if(hasil == 0){
    cout << modul, " Merupakan Bilangan Genap" << endl;
  }
  //Output untuk Bilangan Ganjil
  else if(hasil == 1){
    cout << modul, " Merupakan Bilangan Ganjil" << endl;
  }

  return 0;
}

