#include <stdio.h>

int main() {
    char nama[50];
    int noMeja, kodeMenu, porsi, uangBayar;
    int harga = 0, total, kembalian;
    char namaMenu[30];
    int valid = 1;

  
    printf("          MENU KULINERAN\n");
    printf("Kode  Menu                 Harga\n");
    printf("  1   Nasi Goreng Spesial  Rp 20000\n");
    printf("  2   Soto Ayam            Rp 17000\n");
    printf("  3   Sate Ayam            Rp 25000\n");
    printf("  4   Es Teh Manis         Rp  5000\n");


    printf("Nama Pemesan   : ");
    scanf(" %49[^\n]", nama);

    printf("Nomor Meja     : ");
    scanf("%d", &noMeja);

    printf("Kode Menu      : ");
    scanf("%d", &kodeMenu);

    printf("Jumlah Porsi   : ");
    scanf("%d", &porsi);

    printf("Uang Bayar (Rp): ");
    scanf("%d", &uangBayar);

   
    switch (kodeMenu) {
        case 1:
            sprintf(namaMenu, "Nasi Goreng Spesial");
            harga = 20000;
            break;
        case 2:
            sprintf(namaMenu, "Soto Ayam");
            harga = 17000;
            break;
        case 3:
            sprintf(namaMenu, "Sate Ayam");
            harga = 25000;
            break;
        case 4:
            sprintf(namaMenu, "Es Teh Manis");
            harga = 5000;
            break;
        default:
            valid = 0;
            break;
    }


    if (!valid) {
        printf("Kode menu %d tidak valid!\n", kodeMenu);
        printf("Pesanan dibatalkan.\n");
    } else if (porsi <= 0) {
        printf("Jumlah porsi harus lebih dari 0!\n");
        printf("Pesanan dibatalkan.\n");
    } else {
        total = harga * porsi;
        printf("Nama Pemesan : %s\n", nama);
        printf("Nomor Meja   : %d\n", noMeja);
        printf("Menu         : %s\n", namaMenu);
        printf("Harga Satuan : Rp %d\n", harga);
        printf("Jumlah Porsi : %d\n", porsi);
        printf("Total Bayar  : Rp %d\n", total);
        printf("Uang Bayar   : Rp %d\n", uangBayar);

        if (uangBayar >= total) {
            kembalian = uangBayar - total;
            printf("Kembalian    : Rp %d\n", kembalian);
            printf("Status       : Pembayaran berhasil\n");
        } else {
            printf("Kurang       : Rp %d\n", total - uangBayar);
            printf("Status       : Uang tidak cukup\n");
        }
    }

    printf("=====================================\n");
    printf("Terima kasih, selamat menikmati!\n");

    return 0;
}