/*
Code Written by Noxius (Adam)
Date: 2023/05/26 (金)
Started at ±19:48 WIB
Completed at ±21:58 WIB
*/

#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14;
    int r, d; //Variabel r sebagai jari-jari dan d sebagai diameter
    float luas, keliling, R, D; //Variabel Rumus
    char lanjut = 'y';
    int pilihan, ulang1 = 1, ulang2 = 0;
    /*
    Variabel ulang1 jika user ingin melanjutkan program
    Variabel ulang2 jika user menginput tidak sesuai opsi yang ada
    yang mana akan mengulangi program ke awal tanpa menghitung sesi
    */

    do{
        
        //Inisialisasi nilai opsi invalid
        pilihan = 5;
        
        //Jika user memasukan nilai input tidak sesuai dengan opsi yang ada
        //maka akan mengulang program kembali ke awal
        while(pilihan > 4){
            printf("\t\tPROGRAM HITUNG LINGKARAN || SESI %d\n", ulang1);
            printf("1. Luas Lingkaran\n");
            printf("2. Keliling Lingakran\n");
            printf("3. Diameter Lingkaran\n");
            printf("4. Jari - jari lingkaran\n");
            printf("Silahkan pilih sesuai opsi yang tersedia\n");
            printf("> ");
            scanf("%d", &pilihan);
            
            //Output Pilihan Opsi
            switch(pilihan){
                case 1:
                    printf("\tLUAS LINGKARAN\t\n");
                    printf("Input Jari - jari lingkaran\n");
                    printf("> ");
                    scanf("%d", &r);

                    //Rumus Luas Lingkaran
                    luas = PI * pow(r, 2);
                    
                    printf("Hasil luas lingkaran\n");
                    printf("> %.1f", luas);

                    break;

                case 2:
                    printf("\tKELILING LINGKARAN\t\n");
                    printf("Input Diamater Lingkaran\n");
                    printf("> ");
                    scanf("%d", &d);

                    //Rumus Keliling Lingkaran
                    keliling = PI * d;

                    printf("Hasil Keliling Lingkaran\n");
                    printf("> %.1f", keliling);

                    break;

                case 3:
                    printf("\tDIAMETER LINGKARAN\t\n");
                    printf("Input Jari - jari Lingkaran\n");
                    printf("> ");
                    scanf("%d", &r);

                    //Rumus Diamater Lingkaran
                    D = r * 2;

                    printf("Hasil Diameter Lingkaran\n");
                    printf("> %.1f", D);

                    break;

                case 4:
                    printf("\tJARI - JARI LINGKARAN\t\n");
                    printf("Input Diameter Lingkaran\n");
                    printf("> ");
                    scanf("%d", &d);

                    //Rumus Jari - jari Lingkaran
                    R = d / 2;

                    printf("Hasil Jari - jari Lingkaran\n");
                    printf("> %.1f", R);

                    break;

                default:
                    printf("Opsi tidak tersedia, siahkan pilih sesuai opsi yang tersedia\n\n");
                    break;

            }
            ulang2++;
        }
        printf("\n\n");
        printf("Apakah kamu ingin melanjutkan perhitungan lagi? (y/t)\n");
        printf("> ");
        scanf(" %c", &lanjut);

        ulang1++;
    }
    while(lanjut == 'y');
    
    //Output Sesi berapa kali User
    printf("\nKamu menggunakan program ini sebanyak %d sesi\n", ulang1 - 1);
    
    printf("\nTerima kasih telah menggunakan Program sederhana ini (* ^ 3 ^)\n");
    printf("Semoga Program ini dapat membantumu dalam belajar, Gratia (@ ^ - ^)\n");
    
    return 0;
}
