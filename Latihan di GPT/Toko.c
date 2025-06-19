#include <stdio.h>

int main() {
    int barang, jumlah, harga;
    printf("========================\n");
    printf("Silahkan memilih barang: \n");
    printf("1.Apel (4000)\n");
    printf("2.Jeruk (3000)\n");
    printf("3.Mangga (2000)\n");
    printf("4.Alpukat (4500)\n");
    printf("5.Anggur (5000)\n");
    printf("Barang yang dipilih (Masukkan Nomor): ");
    scanf("%d", &barang);
    printf("Mau beli berapa buah: ");
    scanf("%d", &jumlah);
    printf("========================\n");
    
    switch (barang){
        case 1:
            harga = jumlah * 4000;
            printf("Apel\n");
            printf("Harganya Rp4000\n");
            printf("Jumlah yang dibeli %d\n", jumlah);
            printf("Total Harganya %d\n", harga);
            break;

        case 2:
            harga = jumlah * 3000;
            printf("Jeruk\n");
            printf("Harganya Rp3000\n");
            printf("Jumlah yang dibeli %d\n", jumlah);
            printf("Total Harganya %d\n", harga);
            break;

        case 3:
            harga = jumlah * 2000;
            printf("Mangga\n");
            printf("Harganya Rp2000\n");
            printf("Jumlah yang dibeli %d\n", jumlah);
            printf("Total Harganya %d\n", harga);
            break;

        case 4:
            harga = jumlah * 4500;
            printf("Alpukat\n");
            printf("Harganya Rp4500\n");
            printf("Jumlah yang dibeli %d\n", jumlah);
            printf("Total Harganya %d\n", harga);
            break;

        case 5:
            harga = jumlah * 5000;
            printf("Anggur\n");
            printf("Harganya Rp5000\n");
            printf("Jumlah yang dibeli %d\n", jumlah);
            printf("Total Harganya %d\n", harga);
            break;



    }


}
