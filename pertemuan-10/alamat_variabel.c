#include <stdio.h>

// Tujuan untuk menampilkan alamat dari sebuah variabel menggunakan operator &
int main()
{
    int angka = 10;

    printf("Nilai angka   : %d\n", angka);
    printf("Alamat angka  : %p\n", (void *)&angka); // Menampilkan alamat variabel angka menggunakan operator &

    return 0;
}