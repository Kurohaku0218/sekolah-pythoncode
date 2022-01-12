#include<stdio.h>
#include<stdlib.h>

int main() {
  int baris, kolom, i, j, satu[10][10], dua[10][10]; //Isi value Array Matrix sesuka hati :v
  int hasil[10][10];

  //Inisialisasi Baris pada Matrix
  printf("Input Jumlah Baris : ");
  scanf("%d", &baris);

  //Inisialisasi Kolom pada Matrix
  printf("Input Jumlah Kolom : ");
  scanf("%d", &kolom);

  //Inisialisasi Matrix Pertama
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      printf("Input isi Matrix Pertama [%d][%d] : ", i, j);
      scanf("%d", &satu[i][j]);
    }
  }

  printf("\n");

  //Inisialisasi Matrix Kedua
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      printf("Input Isi Matrix Kedua [%d][%d] : ", i, j);
      scanf("%d", &dua[i][j]);
    }
  }

  //Proses Penjumlahan Matrix
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      hasil[i][j] = satu[i][j] + dua[i][j];
      printf("%d\t", hasil[i][j]);
    }
    printf("\n");
  }

  return 0;
}
