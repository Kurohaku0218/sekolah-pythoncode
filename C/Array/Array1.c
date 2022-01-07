#include<stdio.h>
#include<stdlib.h>

int main() {
  int nilai[2][5];
  float rata;
  int x, y;

  //Baris Pertama
  nilai[0][0] = 85;
  nilai[0][1] = 80;
  nilai[0][2] = 78;
  nilai[0][3] = 95;
  nilai[0][4] = 77;

  //Baris Kedua
  nilai[1][0] = 67;
  nilai[1][1] = 78;
  nilai[1][2] = 88;
  nilai[1][3] = 95;
  nilai[1][4] = 65;

  for(x = 0; x < 2; x++){
    for(y = 0; y < 5; y++){
      rata += nilai[x][y];
    }
    /*
    Indeks 0 untuk Mapel Sejarah
    Indkes 1 untuk Mapel Bahasa
    */
    rata /= 5.0;
    printf("Nilai rata-rata pada nilai %i : %.2f\n", x, rata);
  }

  return 0;
}
