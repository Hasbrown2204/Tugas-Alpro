#include <stdio.h>

int main() {
    char nama[100];
    char nim[30];
    char pilihan, jumlah, durasi;

   
    puts("      MENU PEMINJAMAN BUKU PERPUSTAKAAN       ");
    puts("[1] Algoritma dan Pemrograman Dasar");
    puts("[2] Struktur Data dengan Bahasa C");
    puts("[3] Arsitektur dan Organisasi Komputer");
    puts("[4] Sistem Basis Data Terpadu");
    puts("[5] Jaringan Komputer dan Keamanan");

    // Input 1: Nama Full (bisa pakai spasi) menggunakan fgets
    printf("1. Masukkan Nama Lengkap Anda      : ");
    fgets(nama, sizeof(nama), stdin);

    // Input 2: NIM menggunakan fgets
    printf("2. Masukkan NIM Anggota            : ");
    fgets(nim, sizeof(nim), stdin);

    // Input 3: Pilihan Menu menggunakan getchar
    printf("3. Pilih Kode Menu Buku (1-5)      : ");
    pilihan = getchar();
    getchar(); // Membuang karakter Enter

    // Input 4: Jumlah Buku menggunakan getchar
    printf("4. Masukkan Jumlah Buku (1-5)      : ");
    jumlah = getchar();
    getchar(); // Membuang karakter Enter

    // Input 5: Lama Pinjam menggunakan getchar
    printf("5. Masukkan Lama Pinjam (1-7 Hari) : ");
    durasi = getchar();

    // Menampilkan Output (Tanpa simbol persen %)
    puts("\n==============================================");
    puts("           BUKTI PEMINJAMAN BUKU              ");
    puts("==============================================");
    
    // Menggunakan fputs karena di dalam hasil fgets sudah otomatis ada Enter (\n)
    printf("Nama Peminjam : ");
    fputs(nama, stdout);
    
    printf("NIM Anggota   : ");
    fputs(nim, stdout);

    // Percabangan if - else if untuk mengecek pilihan buku
    if (pilihan == '1') {
        puts("Judul Buku    : Algoritma dan Pemrograman Dasar");
        puts("Lokasi Rak    : Rak Tekno-01");
    } 
    else if (pilihan == '2') {
        puts("Judul Buku    : Struktur Data dengan Bahasa C");
        puts("Lokasi Rak    : Rak Tekno-02");
    } 
    else if (pilihan == '3') {
        puts("Judul Buku    : Arsitektur dan Organisasi Komputer");
        puts("Lokasi Rak    : Rak Tekno-03");
    } 
    else if (pilihan == '4') {
        puts("Judul Buku    : Sistem Basis Data Terpadu");
        puts("Lokasi Rak    : Rak Sistem-01");
    } 
    else if (pilihan == '5') {
        puts("Judul Buku    : Jaringan Komputer dan Keamanan");
        puts("Lokasi Rak    : Rak Jaringan-01");
    } 
    else {
        puts("Judul Buku    : Kode buku tidak ditemukan!");
        puts("Lokasi Rak    : -");
    }

    printf("Jumlah Buku   : ");
    putchar(jumlah);
    puts(" Buku");

    printf("Lama Pinjam   : ");
    putchar(durasi);
    puts(" Hari");
    puts("==============================================");

    return 0;
}