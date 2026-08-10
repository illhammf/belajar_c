#include <stdio.h>

// Fungsi untuk mengubah nilai dari variabel yang dilewatkan melalui pointer
void ubahNilai(int *angka)
{
    *angka = 100;
}

// Untuk mengubah nilai dari variabel yang dilewatkan melalui pointer, kita menggunakan operator dereference (*) untuk mengakses nilai yang ditunjuk oleh pointer dan mengubahnya.
int main()
{
    int nilai = 10;

    printf("Sebelum : %d\n", nilai);

    ubahNilai(&nilai);

    printf("Sesudah : %d\n", nilai);

    return 0;
}