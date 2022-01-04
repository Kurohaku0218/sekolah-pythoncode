#include<iostream>
using namespace std;

int main() {
    int umur;

    cout << "Input Umur kamu : ";
    cin >> umur;

    //Minimal Umur 18 Baru bisa ikut voting Pemilu
    if(umur >= 18){
        cout << "Kamu sudah bisa ikut voting pemilu" << endl;
    }else{
        cout << "Umur kamu belum mencukupi" << endl;
    }

    return 0;
    }
