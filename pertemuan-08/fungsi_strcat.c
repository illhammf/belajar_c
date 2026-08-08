#include <stdio.h>
#include <string.h>

int main()
{
    char namaDepan[100] = "Ilham";
    char namaBelakang[] = " Firmansyah";

    strcat(namaDepan, namaBelakang); // strcat() digunakan untuk menggabungkan dua string. String kedua (namaBelakang) akan ditambahkan ke akhir string pertama (namaDepan). Pastikan array tujuan memiliki cukup ruang untuk menampung hasil penggabungan.

    printf("=== FUNGSI STRCAT ===\n\n");
    printf("Nama Lengkap : %s\n", namaDepan);

    return 0;
}