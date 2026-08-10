#include <stdio.h>

// Untuk mendemonstrasikan dereference pointer dalam bahasa C, Dereference pointer adalah proses mengakses nilai yang disimpan di alamat memori yang ditunjuk oleh pointer. Dalam contoh ini, kita memiliki sebuah variabel integer 'angka' yang diinisialisasi dengan nilai 50. Kita kemudian membuat sebuah pointer 'pointer' yang menyimpan alamat dari variabel 'angka'. Dengan menggunakan operator dereference '*', kita dapat mengakses nilai yang disimpan di alamat memori tersebut melalui pointer.
int main()
{
    int angka = 50;

    int *pointer = &angka;

    printf("Nilai awal : %d\n", angka);

    printf("Nilai melalui pointer : %d\n", *pointer);

    return 0;
}