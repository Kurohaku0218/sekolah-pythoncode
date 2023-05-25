/*
Code written by Noxius (Adam)
Date: 2023/05/25 (木)
Complete at 18:24 WIB
Rev1 at 20:21 WIB
*/

#include<stdio.h>
#include<math.h>

int main() {

    int a, b, c, ulang;
    char lanjut = 'y';

    while(lanjut == 'y'){
        printf("Input sisi A: ");
        scanf("%d", &a);

        printf("Input sisi B: ");
        scanf("%d", &b);

        //Rumus Pythagoras
        c = pow(a, 2) + pow(b, 2);
        
        //Inisialisasi Hasil
        printf("\t\tPerhitungan\t\t\n");
        printf("A^2 = %d^2\n", a);
        printf("B^2 = %d^2\n", b);
        printf("C^2 = A^2 + B^2\n");
        printf("C^2 = %d^2 + %d^2\n", a, b);
        printf("C^2 = %1.f + %1.f = %d", pow(a, 2), pow(b, 2), c);
        printf("\n\n");

        //Output Hasil
        printf("Akar dari %d adalah %1.f\n", c, sqrt(c));
        printf("Hasil Pythagoras: %1.f", sqrt(c));
        printf("\n\n");

        //Kalo mau lanjut perhitungan
        printf("Mau lanjut hitung lagi? ");
        printf("(y/t) >  ");
        scanf(" %c", &lanjut);
        printf("\n");

        ulang++;
    }

    printf("Terima Kasih sudah menggunakan program ini ^_^\n");
    printf("Semoga terbantu");
    
    return 0;
}
