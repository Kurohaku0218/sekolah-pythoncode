#include<iostream>

using namespace std;

int main() {
    int kasus;
    float celcius, kelvin, reamur, fahrenheit;

    cout << "|==========================|" << endl;
    cout << "|      KONVERSI SUHU       |" << endl;
    cout << "|==========================|" << endl;
    cout << "1. Celcius (C)" << endl;
    cout << "2. Reamur (R)" << endl;
    cout << "3. Fahrenheit (F)" << endl;
    cout << "4. Kelvin (K)" << endl;
    cout << "Input Nomor yang diinginkan : ";
    cin >> kasus;

    cout << endl;

    switch(kasus) {
    case 1 :
        cout << "|===================================|" << endl;
        cout << "|       KONVERSI DARI CELSIUS       |" << endl;
        cout << "|===================================|" << endl;
        cout << "Input Suhu dalam Celcius : ";
        cin >> celcius;

        cout << endl;

        cout << "Celcius" << " = " << celcius << " C" << endl << endl;
        cout << "Reamur" << " = " << celcius * 0.8 << " R" << endl << endl;
        cout << "Fahrenheit" << " = " << (celcius * 1.8) + 32 << " F" << endl << endl;
        cout << "Kelvin" << " = " << celcius + 273 << " K" << endl << endl;
        break;

    case 2 :
        cout << "|==================================|" << endl;
        cout << "|      KONVERSI DARI REAMUR        |" << endl;
        cout << "|==================================|" << endl;
        cout << "Input Suhu dalam Reamur : ";
        cin >> reamur;

        cout << endl;

        cout << "Celcius" << " = " << reamur * 1.25 << " C" << endl << endl;
        cout << "Reamur" << " = " << reamur << " R" << endl << endl;
        cout << "Fahrenheit" << " = " << (reamur * 2.25) + 32 << " F" << endl << endl;
        cout << "Kelvin" << " = " << (reamur * 1.25) + 273 << " K" << endl << endl;
        break;

    case 3 :
        cout << "|======================================|" << endl;
        cout << "|      KONVERSI DARI FAHRENHEIT        |" << endl;
        cout << "|======================================|" << endl;
        cout << "Input Suhu dalam Fahrenheit : ";
        cin >> fahrenheit;

        cout << endl;

        cout << "Celcius" << " = " << (fahrenheit - 32) * 5 / 9 << " C" << endl << endl;
        cout << "Reamur" << " = " << (fahrenheit - 32) * 4 /9 << " R" << endl << endl;
        cout << "Fahrenheit" << " = " << fahrenheit << " F" << endl << endl;
        cout << "Kelvin" << " = " << (fahrenheit - 32) * 5 / 9 + 273 << " K" << endl << endl;
        break;

    case 4 :
        cout << "|==================================|" << endl;
        cout << "|      KONVERSI DARI KELVIN        |" << endl;
        cout << "|==================================|" << endl;
        cout << "Input Suhu dalam Kelvin : ";
        cin >> kelvin;

        cout << endl;

        cout << "Celcius" << " = " << kelvin - 273 << " C" << endl << endl;
        cout << "Reamur" << " = " << (kelvin - 273) * 0.8 << " R" << endl << endl;
        cout << "Fahrenheit" << " = " << (kelvin - 273) * 9 / 5 + 32 << " F" << endl << endl;
        cout << "Kelvin" << " = " << kelvin << " K" << endl << endl;
        break;
    }

    return 0;
}
