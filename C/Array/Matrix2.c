#include<stdio.h>
#include<stdlib.h>

int main() {
  int i, j, satu[10][10], transpose[10][10];
  int baris, kolom;

  printf("Input Jumlah Baris : ");
  scanf("%d", &baris);

  printf("Input Jumlah Kolom : ");
  scanf("%d", &kolom);

  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      printf("Input Isi Matrix Pertama : ");
      scanf("%d", &satu[i][j]);
    }
  }

  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      transpose[j][i] = satu[i][j];
    }
  }

  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      printf("%d\t", transpose[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
